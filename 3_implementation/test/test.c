#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "voting.h"
#include "unity.h"

static FILE *fptr;
struct node* root=NULL;
unsigned long long  int aadhar;
int a;
int age;
char iname[50];
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
void  search_Valid_aadhar(){
    //open_file("randno.txt","r",&fptr);
    //fscanf(fptr,"%llu %d %[^\n]s",&aadhar,&age,iname);
    aadhar=101369133068;
    age=67;
    strcpy(iname,"RamGandhi");
    root=insert(root,aadhar,age,iname);
    TEST_ASSERT_EQUAL(Success,search(root,aadhar));
}
void search_invalid_age(){
    root=NULL;
    aadhar=101101513928;
    age=2;
    strcpy(iname,"AbhishekVerma");
    root=insert(root,aadhar,age,iname);
    TEST_ASSERT_EQUAL(Not_Eligible,search(root,aadhar));
}
void invalid_aadhar(){
    //root=NULL;
    aadhar=101101513929;
    age=2;
    strcpy(iname,"AbhishekVerma");
    //root=insert(root,aadhar,age,iname);
    TEST_ASSERT_EQUAL(Invalid_user,search(root,aadhar));
}
void insert_checking(){
    root=NULL;
    aadhar=101369133068;
    age=67;
    strcpy(iname,"RamGandhi");
    root=insert(root,aadhar,age,iname);
    aadhar=101101513928;
    age=2;
    strcpy(iname,"AbhishekVerma");
    TEST_ASSERT_EQUAL(Left,insert(root,aadhar,age,iname));
    aadhar=101734575197;
    age=24;
    strcpy(iname,"NamanDeshpande");
    TEST_ASSERT_EQUAL(Right,insert(root,aadhar,age,iname));
    aadhar=101129566412;
    age=26;
    strcpy(iname,"BharathDighe");
    TEST_ASSERT_EQUAL(Left_Right,insert(root,aadhar,age,iname));
    aadhar=101025202361;
    age=27;
    strcpy(iname,"VishamLokhande");
    TEST_ASSERT_EQUAL(Left_Left,insert(root,aadhar,age,iname));
    aadhar=101374344042;
    age=50;
    strcpy(iname,"AartiDongre");
    TEST_ASSERT_EQUAL(Right_left,insert(root,aadhar,age,iname));
    aadhar=101937477083;
    age=27;
    strcpy(iname,"IndrajeetLeone");
    TEST_ASSERT_EQUAL(Right_Right,insert(root,aadhar,age,iname));
}
void file_exist(){
	TEST_ASSERT_EQUAL(Success,open_file("randno.txt","r", &fptr));
	TEST_ASSERT_EQUAL(File_Not_found,open_file("test.txt","r", &fptr) );
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(file_exist);
    
    RUN_TEST(search_Valid_aadhar);
    RUN_TEST(search_invalid_age);
    RUN_TEST(invalid_aadhar);
    RUN_TEST(insert_checking);
    //added test cases
    /* Close the Unity Test Framework */
    return UNITY_END();
}

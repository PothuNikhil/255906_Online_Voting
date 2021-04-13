#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "voting.h"
#include "unity.h"

static FILE *fptr;
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
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
    /* Close the Unity Test Framework */
    return UNITY_END();
}
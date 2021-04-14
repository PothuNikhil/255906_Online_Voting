#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "voting.h"

static int a,b,c;

void Vote(int choice)
{

 if(choice==1)
 {
  a++;
 }
 if(choice==2)
 {
  b++;
 }
 if(choice==3)
 {
  c++;
 }
 printf("Votes for A=%d\n",a);
 printf("Votes for B=%d\n",b);
 printf("Votes for C=%d\n",c);

}


int main()
{
    int i,ag;
    int t;
    int stop = 0;
    unsigned long long n;
//    struct node *q;
    error_t q;
    int flag=0;
    char na[50];
    struct node *root1 = NULL;
    FILE *ptr_file;
    char buf[1000];

    /* ptr_file = fopen("randno.txt", "r");
    if (!ptr_file)
    {
        printf("No such File\n");
        return 1;
    } */
    error_t open = open_file("randno.txt","r",&ptr_file);

	switch(open){
		case File_Not_found:
			printf("File not found");
			exit(1);
			break;
		case Success:
                for(i = 0; i < 40000; i++)
                {
                    if(flag == 0)
                    {
                        fscanf(ptr_file,"%llu %d %49[^\n]s",&n,&ag,na);
                        root1 = insert(root1,n,ag,na);
                        flag = 1;
                    }
                    else
                    {
                        fscanf(ptr_file, "%llu %d %49[^\n]s",&n,&ag,na);
                        insert(root1,n,ag,na);
                        flag++;
                        //printf("if dont wnna continue press 0");
                        //scanf("%d",&p);
                    }
                }
    }
	printf("Data Added to BST\n");
	fclose(ptr_file);
	unsigned long long p;
	do
	{
        printf("Enter no:");
        scanf("%llu",&p);
        clock_t begin = clock();
        q = search(root1,p);
        if(q == Success)
        {
           printf("1)Vote A\n2)Vote B\n3)Vote C\n");
           scanf("%d",&t);
           if(t > 0 && t <= 3)
            Vote(t);
           else
            printf("Enter Valid input\n");
		}

        clock_t end = clock();
        double time_taken = ((double)(end - begin)/CLOCKS_PER_SEC);
        printf("Enter 1 or any number to continue else 0 to finish Voting and find who won the Vote\n");
        scanf("%d", &stop);

    }while(stop);

    if(a > b && a > c)
        printf("A won with votes of %d\n",a);
    else if(b > c)
        printf("B won with votes of %d\n",b);
    else if(a==b==c)
        printf("tied");
    else
        printf("C won with votes of %d\n",c);

    return 0;
}
//edited



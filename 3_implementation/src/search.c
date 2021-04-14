#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "voting.h"
error_t search(struct node* root,unsigned long long val)
{
    curr_node=root;
    int steps=0;
    int limit=18;
    while(1)
    {
        if(curr_node->aadhno == val)
        {

            steps++;
            //printf("Steps Taken: %d\n",steps);
            //printf("Name: %s \n",curr_node->name);
            if(curr_node->age < limit)
            {
                //printf("Not Eligible to vote\n");
                return Not_Eligible;
            }
            else
            {
                //printf("Eligible to Vote\n");
                return Success;
            }
        }
        else if(curr_node->aadhno > val)
        {
            steps++;
            if(curr_node->left==NULL)
            {
				//printf("Invalid Aadhar Number\n");
                return Invalid_user;
            }
            if(curr_node->left->aadhno==val)
            {
                steps++;
                //printf("Steps Taken: %d\n",steps);
                //printf("Name: %s \n",curr_node->left->name);

                if(curr_node->left->age<limit)
                {
                    //printf("Not Eligible to vote\n");
                    return Not_Eligible;
				}
                else
                {
                   // printf("Eligible to Vote\n");
                    return Success;
                }
            }
            else if(curr_node->left->aadhno>val)
            {
                steps++;
                if(curr_node->left_left==NULL)
                {
                    steps++;
                    //printf("%d\n",steps);
                    //printf("Invalid Aadhar Number\n");

                    return Invalid_user;
                }
                if(curr_node->left_left->aadhno==val)
                {
                    steps++;
                    //printf("Steps Taken: %d\n",steps);
                    //printf("Name: %s \n",curr_node->left_left->name);
                    if(curr_node->left_left->age<limit)
			            {//printf("Not Eligible to vote\n");
				            return Not_Eligible;}
		            else
			            {//printf("Eligible to Vote\n");
				        return Success;}
              }
                steps++;
                curr_node=curr_node->left_left;
            }
            else
            {
                if(curr_node->left_right==NULL)
                {
                    steps++;
                    //printf("Invalid Aadhar Number\n");
                    return Invalid_user;
                }
                if(curr_node->left_right->aadhno==val)
                {
                    steps++;
                    //printf("Steps Taken: %d\n",steps);
                    //printf("Name: %s \n",curr_node->left_right->name);
                    if(curr_node->left_right->age<limit)
			            {//printf("Not Eligible to vote\n");
				        return Not_Eligible;}
		            else
			            {//printf("Eligible to Vote\n");
				        return Success;}
                     }
                steps++;
                curr_node = curr_node->left_right;
            }
        }
        else
        {
            if(curr_node->right==NULL)
            {
                steps++;
                //printf("Invalid Aadhar Number\n");
                return Invalid_user;
            }
            if(curr_node->right->aadhno==val)
            {
                steps++;
                //printf("Steps Taken: %d\n",steps);
                //printf("Name: %s \n",curr_node->right->name);
                if(curr_node->right->age<limit)
			        {//printf("Not Eligible to vote\n");
				    return Not_Eligible;}
		        else
			        {//printf("Eligible to Vote\n");
				    return Success;}
            }
            else if(curr_node->right->aadhno>val)
            {
                steps++;
                if(curr_node->right_left==NULL)
                {
                    steps++;
                    //printf("Invalid Aadhar Number\n");
                    return Invalid_user;
                }
                if(curr_node->right_left->aadhno==val)
                {
                    steps++;
                    //printf("Steps Taken: %d\n",steps);
                    //printf("Name: %s \n",curr_node->right_left->name);
                    if(curr_node->right_left->age<limit)
			            {//printf("Not Eligible to vote\n");
				        return Not_Eligible;}
		            else
			            {//printf("Eligible to Vote\n");
			            return Success;}
                }
                steps++;
                curr_node=curr_node->right_left;
            }
            else
            {
                if(curr_node->right_right==NULL)
                {
                    steps++;
                    //printf("Invalid Aadhar Number\n");
                    return Invalid_user;
                }
                if(curr_node->right_right->aadhno==val)
                {
                    steps++;
                   // printf("Steps Taken: %d\n",steps);
                   //printf("Name: %s \n",curr_node->right_right->name);
                    if(curr_node->right_right->age<limit)
			            {//printf("Not Eligible to vote\n");
				        return Not_Eligible;}
		            else
			            {//printf("Eligible to Vote\n");
				        return Success;}
                    //return curr_node->right_right;
                }
                steps++;
                curr_node=curr_node->right_right;
            }

        }

    }
}
//updated

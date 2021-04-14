#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "voting.h"
error_t open_file(char* address, char* mode, FILE **ptr){
	(*ptr) = fopen(address,mode);

	if ((*ptr) == NULL)
		return File_Not_found;
	else
		return Success;
}

struct node *newNode(unsigned long long item,int ge,char iname[50])
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->aadhno = item;
    temp->age=ge;
    strcpy(temp->name,iname);
    temp->left = temp->right = NULL;
    temp->left_left = temp->right_right = NULL;
    temp->left_right = temp->right_left = NULL;
    return temp;
}


struct node* insert(struct node* Node,unsigned long long item,int age,char iname[50])
{
	curr_node=Node;
	while(1)
	{

	if(curr_node==NULL)
    {
		//printf("ROOT Added\n");
        return newNode(item,age,iname);
    }

    else{

    if(curr_node->aadhno > item)
    {
        if(curr_node->left!=NULL)
        {
          if(curr_node->left->aadhno>item)
          {
              if(curr_node->left_left==NULL)
              {
	//			  newnode(value);
                  curr_node->left_left=newNode(item,age,iname);
                  printf("Added %llu LL of %llu\n",curr_node->left_left->aadhno,curr_node->aadhno);


                  return (struct node*)Left_Left;
              }
              curr_node=curr_node->left_left;
          }
          else
          {
              if(curr_node->left_right==NULL)
              {
	//		  newnode(value);
                  curr_node->left_right=newNode(item,age,iname);
                  printf("Added %llu LR of %llu\n",curr_node->left_right->aadhno,curr_node->aadhno);

                  return (struct node*)Left_Right;

              }
                curr_node=curr_node->left_right;

          }
        }
        else
        {
     //      newnode(value);
           curr_node->left=newNode(item,age,iname);
            printf("Added %llu L of %llu\n",curr_node->left->aadhno,curr_node->aadhno);
           return (struct node*)Left;

        }
    }
    else
    {
        if(curr_node->right!=NULL)
        {

            if(curr_node->right->aadhno>item)
            {
                if(curr_node->right_left==NULL)
                {
		//			newnode(value);
                    curr_node->right_left=newNode(item,age,iname);
                    printf("Added %llu RL of %llu\n",curr_node->right_left->aadhno,curr_node->aadhno);

                    return (struct node*)Right_left;

                }
                 curr_node=curr_node->right_left;


            }
            else
            {
                if(curr_node->right_right==NULL)
                {
         //newnode(value);
                    curr_node->right_right=newNode(item,age,iname);
                    printf("Added %llu RR of %llu\n",curr_node->right_right->aadhno,curr_node->aadhno);

                    return (struct node*)Right_Right;

                }
                curr_node=curr_node->right_right;


            }

        }
        else
        {
          //  newnode(value);
            curr_node->right=newNode(item,age,iname);
            printf("Added %llu R of %llu\n",curr_node->right->aadhno,curr_node->aadhno);
            return (struct node*)Right;
        }

    }

    }
}
}

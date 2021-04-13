/**
 * @file voting.h
 * @author Nikhil  Pothu
 * @brief 
 * @version 0.1
 * @date 2021-04-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __VOTING_H
#define __VOTING_H
typedef enum error_t{
    File_Not_found = -1,
    /* ERROR_NULL_PTR = -1, */
    Success=0
}error_t; 
struct node
{
    unsigned long long aadhno;
	int age;
    char name[50];
    struct node *left, *right, *left_left, *right_right, *left_right, *right_left;
}*curr_node;
error_t open_file(char* addr,char* mode,FILE **ptr);
struct node *newNode(unsigned long long item,int ge,char iname[50]);
struct node* insert(struct node* Node,unsigned long long item,int age,char iname[50]);
int search(struct node* root,unsigned long long val);
void Vote(int choice);
#endif
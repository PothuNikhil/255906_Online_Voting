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
/**
 * @brief error function
 * 
 */
typedef enum error_t{
    File_Not_found = -1,
    /* ERROR_NULL_PTR = -1, */
    Success=0,
    Invalid_user=1,
    Not_Eligible=2
}error_t;
typedef enum error_t_1{
    root1=-1,
    Left=0,
    Right,
    Left_Left,
    Left_Right,
    Right_Right,
    Right_left
}error_t_1; 
/**
 * @brief node creation
 * 
 */
struct node
{
    unsigned long long aadhno;
	int age;
    char name[50];
    struct node *left, *right, *left_left, *right_right, *left_right, *right_left;
}*curr_node;
/**
 * @brief function to open the file
 * 
 * @param addr address
 * @param mode mode
 * @param ptr file pointer
 * @return error_t 
 */
error_t open_file(char* addr,char* mode,FILE **ptr);
/**
 * @brief function to create new node
 * 
 * @param item aadhar number of voter
 * @param ge  age 
 * @param iname name of voter
 * @return struct node* 
 */
struct node *newNode(unsigned long long item,int ge,char iname[50]);
/**
 * @brief function to insert the data in the Binary searchtree
 * 
 * @param Node  Node
 * @param item  Aadhar number
 * @param age   age
 * @param iname name
 * @return struct node* 
 */
struct node* insert(struct node* Node,unsigned long long item,int age,char iname[50]);
/**
 * @brief function to search given aadhar number
 * 
 * @param root  root node
 * @param val aadhar number
 * @return error_t 
 */
error_t search(struct node* root,unsigned long long val);
/**
 * @brief function to input the voting
 * 
 * @param choice VOTE
 */
void Vote(int choice);
#endif

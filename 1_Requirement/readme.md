# Requirements
## Introduction
  * Voting as we all know is often associated with politics and is done more often  using the manual approach where voters queue up to vote for their choices. Manual voting without any doubt exhibits chances of voting malpractices and other negative vices. Those and many other reasons triggered the need to shift from the manual voting system to a more sophisticated digitalized voting platform. 
  * Today, voting does not only stops at politics but also extends to other areas of human endeavours such as entertainment, sports, business, Student unions, classrooms, fashion and style and so on and so forth. The need to migrate from manual voting system to digital voting system has brought about efficiency, free and fair election and as well as time utilisation. Nowadays, vote count needs to be manually counted to declare the result of the elections, which is both time consuming and labour intensive. 

## Research
Binary Search Tree is a node-based binary tree data structure which has the following properties: 
• The left subtree of a node contains only nodes with keys lesser than the node’s key 
• The right subtree of a node contains only nodes with keys greater than the node’s key. 
• The left and right subtree each must also be a binary search tree. In this project a Search tree with 6 childs is used. 

### Benefits
  * Can easily store and Retrive Aadhar data 
## Cost and Features
Feature | Cost | Time
| ----- | ----- | ----- |
|       |   Low | 10    |

## Defining Our System
### Explanation
  * While inserting data we used 6 children in the tree. 
  * If in given value is less than the root value it goes to left child else to right  child. If left value is not NULL then if value if less than left then value goes to left_left else left_right.
  * Same is done if right is not NULL. While Searching if the input Aadhaar number is not present in the data then “Wrong Input” is printed else it will check if the age of    person is above 18 or not. 
  * Then, the user will input the party number whom he/she wants to give vote. At the end, Name of the winner of elections will be printed with the number of votes.
 
## SWOT ANALYSIS
![SWOT Analysis](https://github.com/PothuNikhil/255906_Online_Voting/blob/main/1_Requirement/SWOT.png)

# 4W&#39;s and 1&#39;H

## Who
  * Election Commission 

## What
  * Online Voting platform which is very useful during this covid times.

## When
  * This can be implemented After electors and canditates are educated on onnline voting platform.

## Where
  * Anywhere where there is requirement of voting.

## How
  * This can be implemented first by checking his/her AAdhar number is matching with the database or not.
  * If matching it will check whether he is above 18yrs or not.
  * If he is above 18 then he can vote.

## Detail requirements
### High Level Requirements 

| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Data from file should be able to read | Techincal | TBD-S1 | 
| HR02 | Data should be inserted in the form of Binary Search tree| Techincal | TBD-S1 |
| HR03 | Voter shall enter Aadhar number  | Techincal | TBD-S1 |
| HR04 | Adhar number shall be searched in BST | Techincal | TBD-S1 |
| HR05 | Verifying Age of the Voter | Techincal | TBD-S1 |
| HR06 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR07 | Data should always be stored when closing the system | Scenario | TBD-S1 |
### Low level Requirements
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | File which contains Aadhar age and name of the voter shall be opened. | HR01 | TBD-S1 |
| LR02 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR01 | TBD-S1 |
| LR03 | Reading Voter data should be possible in 2 ways, first being by searching by Aadhar number and second by printing all the records available | HR04 | TBD-S1 |
| LR04 | If voter searches for an invalid Aadhar number "No Record Found" message should be displayed | HR03 | TBD-S1 |
| LR05 | If voter enters valid Aadhar number check his age if he is above 18 he can proceed to vote | HR05 | TBD-S1 |
| LR06 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | HR07 | TBD-S1 |

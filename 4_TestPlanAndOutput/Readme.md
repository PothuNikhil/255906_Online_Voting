# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Check if file is present or not                      | File name| Success | Success| Scenario|
|  H_01_01       |Check if file is present or not                    | file name| File not found|File not found|Scenario |
|  H_02   |check if Aadhar  nummber is present or not| Aadhar number ,age ,name | Success |Success|Technical|
| H_03 | Check if person is eligible to vote |  Aadhar number ,age ,name | Not_eligible |Not_eligible| Requirement based |
| H_04 | Check if Aadar number is present or not|  Aadhar number ,age ,name | Invalid_User | Invalid_user | Requirement based |
| H_05 | check BST | Aadhar number ,age ,name  | Left | left| technical |
| H_05_01 | check BST | Aadhar number ,age ,name  | Right | Right| technical |


## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_05|check BST | Aadhar number ,age ,name  | Right | Right| technical |
|  L_01 _01      | H_05 | check BST | Aadhar number ,age ,name  | Left_left| Left_left| technical |
|  L_01_02    | H_05 | check BST | Aadhar number ,age ,name  | Left_right | Left_Right| technical |
|  L_01_03      | H_05 | check BST | Aadhar number ,age ,name  | Right_left | Right_left| technical |
|  L_01_04       | H_05 | check BST | Aadhar number ,age ,name  | Right_right | Right_right| technical |

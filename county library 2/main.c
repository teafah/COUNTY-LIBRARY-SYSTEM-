/*
users-view users,add new user,edit,delete,login,catalogue
*/
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int menu();//prototype
int main()
{
  int action;
  action=menu();
  //execute action
  return 0;

}
 int menu()//header
 {


   int action;
   do{
      printf("\tcounty Library\n");
      printf("welcome Mudaki.\n");
      printf("What would you like to do?n");
      printf("1.View users.\n");
      printf("2.Add new user.\n");
      printf("3.Edit user.\n");
      printf("4.Delete user.\n");
      printf("5.Change password.\n");
      printf("6.Logout.\n");
      printf("7.Exit.\n");
      printf("Selected action(1-7):");
      scanf("%d,&action");
      if("action)<1||action>7");
      {
        system("cls");
        printf("Invalid Action.try again");

      }
      }while(action<1||action>7);
      
      return 0;
 }

/*  Cashier have 10 , 50 and 100 rupies notes. Enter Any amount multiple of 100 and calculate how much cashier will give 10 , 50 and 100 rupies notes for that amount    */

#include<stdio.h>

int main()
{
  int amount, ten_rs, fifty_rs, hundred_rs;
  
  printf("Enter The Amount You Want to be Withdraw : ");
  scanf("%d",&amount);
  
  ten_rs = amount / 10;
  fifty_rs = amount / 50;
  hundred_rs = amount / 100;
  
  printf("Cashier Will give %d notes of 10 Rupies \n",ten_rs);
  printf("Cashier Will give %d notes of 50 Rupies \n",fifty_rs);
  printf("Cashier Will give %d notes of 100 Rupies \n",hundred_rs);
  
 return 0; 
}

/*  Enter five digit number through    */

#include<stdio.h>

int main()
{
  int num,mod,rev = 0;
  printf("Enter any five digit number :");
  scanf("%d",&num);
  
  while(num > 0)
  {
    mod = num % 10;
    rev = rev * 10 + mod;
    num = num / 10;
  }
  
  printf("Reverse of the given numbers is : %d ",rev);
 return 0; 
}

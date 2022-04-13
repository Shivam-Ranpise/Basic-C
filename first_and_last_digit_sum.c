/*  Find the sum of first and last digits of the entered number   */

#include<stdio.h>

int main()
{
  int num,first,last,sum = 0;
  printf("Enter digit : ");
  scanf("%d",&num);
  
  // To find out the last digit of the entered number 
  
  last = num % 10;
  
  // To find out first digit of the entered number
  
  while(num >= 10)    //to check Entered number has at least 2 digits
  { 
    num = num / 10;
  }
  
  first = num;
  sum = first + last;
  
  printf("sum of the digits : %d ",sum);
 return 0; 
}

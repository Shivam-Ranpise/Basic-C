/* Enter any digit having lenght of five and calculate all digits sum   */

#include<stdio.h>

int main()
{
  int num,mod,sum = 0;
  printf("Enter Any five digit number : ");
  scanf("%d",&num);
  
  while(num > 0)
  {
    mod = num % 10;   //calculate last digit of the number.
    sum = mod + num;  //addition of that number.
    num  = num / 10;  //to get rest of the numbers.
  }
  
  printf("Sum of Entered number is : %d ",sum);
  return 0; 
}

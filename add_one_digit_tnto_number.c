/*  Enter number and print that number by adding one into every digit of that number   */

#include<stdio.h>

int main()
{
  int num,number,sum,i,count,n=1;
  printf("Enter any Number :");
  scanf("%d",&num);
  
  // Assign num to number for counting purpose......
  
  number = num;
  
  // count the values untill it's empty.....
  
  while(number !=0)
  {
    number = number /10;
    count = count +1;
  }
  
  //For addition purpose we require numbr of 1's for that we add n untill counter gets enpty.........
  
  for(i=1;i<count;i++)
  {
    n = n * 10;
    n = n + 1;
  }
  
  //Add that n value and the original number.........
  
  sum = num + n;
  printf("Addition : %d ",sum);

}

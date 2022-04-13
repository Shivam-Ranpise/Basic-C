/*   swap two numbers  */

#include<stdio.h>

int main()
{
  int a,b,temp;
  printf("Enter the values of a and b :");
  scanf("%d %d",&a,&b);
  
  temp = a;
  a = b;
  b = temp;
  
  printf("After swaping values : a = %d and b = %d ",a,b);
  
 return 0;
}

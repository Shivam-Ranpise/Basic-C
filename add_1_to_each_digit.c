#include<stdio.h>

int main()
{
 int number;
 int new_number,new_number2,new_number3,new_number4,new_number5;
 
 printf("Enter Five Digit Number = ");
 scanf("%d",&number);

 new_number5 = number%10;
 number = number / 10;

 new_number4 = number % 10;
 number = number / 10;

 new_number3 = number %10;
 number = number / 10;

 new_number2 = number % 10;
 number = number / 10 ;

 new_number = number % 10;
 number = number / 10;

 printf("After Adding one in to each digit :");
 printf("%d",new_number+1); 
 printf("%d",new_number2+1);
 printf("%d",new_number3+1);
 printf("%d",new_number4+1);
 printf("%d",new_number5+1);

 printf("\n");
 return 0;
}

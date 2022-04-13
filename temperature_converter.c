/*   Convert Temperature Fahrenheit into Centigrade    */ 

#include<stdio.h>

int mian()
{
  float fahrenheit,centigrade;
  printf("Enter Temperature Value in Fahrenheit : ");
  scanf("%f",&fahrenheit);
  centigrade = (fahrenheit - 32)*5/9;
  printf("Converted Temperature Value : %d centigrade",centigrade);
 return 0; 
}

/*  Enter 5 subject marks and calculate Agreegate and Percetage   */

#include<stdio.h>

int main()
{
  int sub1,sub2,sub3,sub4,sub5,agreegate;
  float percentage;
  printf("Enter Marks of all subjects : ");
  scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
  
  agreegate = sub1 + sub2 + sub3 + sub4 + sub5;
  
  printf("Your Total Agreegate : %d",agreegate);
  
  percentage = (agreegate*100)/500;
  
  printf("Your Total Pencentage : %f %% ",percentage);
  return 0;
   
}

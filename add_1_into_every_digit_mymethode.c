/* add 1 into every digit of number   */
  
#include<stdio.h>

int main()
{
  int num,mod,i,rev,rev2,temp;
  printf("Enter any number : ");
  scanf("%d",&num);
  
  //to add 1 from reverse......
  
  while(num !=0)
  {
    mod = num % 10;
    temp = mod +1;
    num = num /10;
    if(temp==10)
    {
     temp=0; 
    }
    rev = (rev*10)+temp;
  }
  
  //make reverse of the entered above output...........
  
  while(rev !=0 )
  {
    i = rev % 10;
    rev = rev / 10;
    rev2 = (rev2 *10)+ i;
  }
  
  printf("Number : %d ",rev2);
  
 return 0; 
}

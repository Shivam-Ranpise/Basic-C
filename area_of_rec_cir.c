/*  Enter the length and breadth of rectangle and calculate area and perimeter of rectangle and Enter radius of circle and calculate araa and circumference of circle      */ 


#include <stdio.h>

int main() {
        int l,b,r,area1,area2,perimeter,circumference;
        float pi= 3.14;
    printf("Enter the value of length and breadth :");
    scanf("%d %d",&l,&b);
    area1 = l * b;
   perimeter = 2*(l+b);
    printf("Area of a Rectangle : %d \n",area1);
    printf("Perimeter of a Rectangle : %d",perimeter);
    printf("\n Enter the value of a radius of a circle :");
    scanf("%d",&r);
    area2 = pi*(r*r);
    circumference = 2*(pi*r);
    printf(" \n Area of Circle : %d \n",area2);
    printf("Circumference of a Circle : %d",circumference);
    return 0;
}

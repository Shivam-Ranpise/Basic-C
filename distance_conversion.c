/*  Enter distance in kilometers and convert it into meters,centimeters,feets and inchs  */


#include<stdio.h>

int main()
{
	int kilometer,meter,centimeter;
	float feet,inches;
	printf("Enter The Distance in Kilometer : ");
	scanf("%d",&kilometer);
	meter = kilometer * 1000;
	centimeter = kilometer * 100000;
	feet = kilometer * 3280.84;
	inches = kilometer * 39370.1;
	printf("%d Kilometer = %d meter \n",kilometer,meter);
	printf("%d Kilometer = %d centimeter \n",kilometer,centimeter);
	printf("%d Kilometer = %d feet \n",kilometer,feet);
	printf("%d Kilometer = %d inches \n",kilometer,inches);
	return 0;
}

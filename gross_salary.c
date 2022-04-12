/* Calculate Gross Salary , Get basic salary through user. Dearness Allowance = 40%, Home Rante Allowance = 20%. */ 

#include <stdio.h>

int main()
{
    int basic_salary,DA,HA,gross_salary;
    printf("Enter Your Basic Salary : ");
    scanf("%d",&basic_salary);
    DA = basic_salary * 40 / 100;
    HA = basic_salary * 20 / 100;
    gross_salary = basic_salary + DA + HA;
    printf("Your Total Gross Salary is : %d",gross_salary);
    return 0;
}

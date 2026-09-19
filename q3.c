#include<stdio.h>
int main(){
    float tax, monthly_salary, gross_salary;

    printf(" monthly salary=");
    scanf("%f",&monthly_salary);

    printf("tax=");
    scanf("%f",&tax);

    gross_salary= monthly_salary + tax;
    printf("gross_salary %f",gross_salary);
    
    





    return 0;
}
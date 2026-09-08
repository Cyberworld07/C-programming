//write a c programme to take any two inputs from user store it in appropriate variables and swap them.
//write a c programme to take inputs from the user about his basic pay, HRA and DA. Compute gross salary and display
//Gross salary=basic pay + percetage of hra+perctage da.
#include <stdio.h>
int main()
{
    int a;//a= basic_pay
    float b,c;//b=percentage HRA, c=percentage DA
    float x;
    printf("Enter Basic pay,percentage of HRA, percentage of DA: ");
    scanf("%d %f %f",&a,&b,&c);
    x = a+a*b/100+a*c/100;
    printf("Gross salary:%f",x);
    return 0;

}
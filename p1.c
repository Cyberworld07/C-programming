//write a c programme to take three integers from user and compute its avg and show the result.
#include <stdio.h>
int main()
{
    int x,y,z;
    float a;
    printf("Enter three numbers:   ");
    scanf("%d%d%d",&x,&y,&z);
    a = (x+y+z)/3.0;
    printf("%f",a);
    return 0;
}
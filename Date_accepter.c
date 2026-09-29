//write a programe to accept date in format ddmmyyyy and check if valid or not
#include <stdio.h>
int main()
{
    int d , m , y;
    printf("Enter a date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d",&d,&m,&y);
    if (m>12)
       {printf("Invalid Month!");}
    else if (m == 2)
    {
        if (y % 4 == 0 && d > 29)
           { printf("Invalid date.");}
        else if (y % 4 != 0 && d > 28)
        {
            printf("Invalid date");
        }
        else 
        {
            printf("Valid date!");
        }
    }  
    else if ((m == 4 ,6 ,9, 11) && d > 30)
    {
        printf("Invalid date");
    }
    else 
        printf("Valid date!");
    
        return 0;
}
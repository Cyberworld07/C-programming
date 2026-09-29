#include <stdio.h>
int main()
{
    
    int i,a ;
    while(1){
        int sum = 1 ;
    printf("Enter a number to calculate the factorial: \n");
    scanf("%d", &i);

    for (a = 1; a <= i; a++){
         sum = sum*a;
        
    
    }
     printf("\nFactorial of %d is %d",i, sum);
}
     return 0;
}
// write a code to print numbers from 1 to n with their squares
#include <stdio.h>
int main()
{
    int n, sum, i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    
    for(i = 1;i <= n; i++){
       
        sum= i*i;
        printf("%d  %d\n",i,sum);
    } 
    
    return 0 ;
    
}
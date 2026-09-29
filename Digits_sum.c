// to find the number of digits and their sum 
#include <stdio.h>
int main(){
    int n, digit;
    int count = 0, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    while(n > 0){
        digit = n % 10;
        sum = sum + digit;
        count++;
        n = n / 10;
    }

    printf("Num of digits = %d\n", count);
    printf("Sum of digits = %d\n",sum);

    return 0;
}
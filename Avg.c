// Find the avg and sum of no. which are divisible by 3 from 1 to n
#include <stdio.h>
int main(){
    int n,i, sum = 0,c = 0;
    float avg;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum = sum + i;
            c++;
        }
    }
    if(c > 0) {
        avg = (float)sum / c;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }
    else {
        printf("No number divisible by 3.\n ");
    }
    return 0;
}
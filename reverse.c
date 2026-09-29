// to write a code to reverse a num, and check if it is a palindrome
#include <stdio.h>
int main(){
    int og, digit, rev = 0 ,n;
    printf("Enter a  positive number: ");
    scanf("%d",&og);
    n = og;
    while(og > 0){
        digit = og % 10;
        rev = rev * 10 + digit;
        og = og / 10;
    }
    printf("Reverse = %d\n",rev);
    if(n == rev){
        printf("Number is palindrome.\n");
    }
    else{
        printf("Number is not palindrome.\n");
    }

    return 0;
}
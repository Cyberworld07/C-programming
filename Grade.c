#include <stdio.h>
int main(){
    int a;
    printf("Enter the marks of student: \n");
    scanf("%d",&a);

    if (a>=90 && a<=100){
        printf("The grade is A");
    }
    else if (a >= 80 && a<90){
        printf("The grade is B");
    }
    else if (a >= 70 && a<80){
        printf("The grade is C");
    }
    else if (a >= 60 && a<70){
        printf("The grade is D");
    }
    else if (a < 60){
        printf("The grade is F");
    }
    else{
        printf("Invalid input!");
    } 
    return 0;
}
#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter marks of 1st subject: ");
    scanf("%d", &a);
    printf("Enter marks of 2nd subject: ");
    scanf("%d", &b);
    printf("Enter marks of 3rd subject: ");
    scanf("%d", &c);
    d = (a + b + c)/3;
    if(d>=40 && a, b, c >=33){
        printf("Result: Passed. Congratulations!\n");
    } else {
        printf("Result: Failed. Better luck next time!\n");
    }
    return 0;
}
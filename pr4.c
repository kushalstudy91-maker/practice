#include<stdio.h>
int main(){
    float a;
    printf("Enter your income: ");
    scanf("%f", &a);
    if(a >=250000 && a < 500000){
        printf("You have to pay 5%% tax on your income which comes out to be %d\n, a * 0.05);");
    }
    if(a>= 500000 && a < 1000000){
        printf("You have to pay 20%% tax on your income which comes out to be %d\n, a * (0.20));");
    }
    if(a >= 1000000){
        printf("You have to pay 30%% tax on your income which comes out to be %d\n, a * 0.30);");
    } else {
        printf("You are not liable to pay any tax.\n");
    }
}
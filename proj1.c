#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // Number Guessing Game
    srand(time(0));
    int n, i, a, b, c;
    n = (rand() % 100) + 1;
    
    for(i=1; i<100; i++){
    printf("Enter your Guess(between 1 and 100): ");
    scanf("%d", &a);
    if(a>n){
        printf("Lower Number please!\n");
    }
    if(a<n){
        printf("Higher Number please!\n");
    }
    if(a==n){
        printf("Your guess is correct!\n");
        break;
    }
}
printf("You took %d guesses to get the correct answer!", i);
    return 0;
}
//Fibonacci Series code

#include<stdio.h>
int fibb(int);
int fibb(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    } 
    if(n!=1 || n!=2){
        return fibb(n-1)+n;
    }
}
int main(){
int n = 5;
int f = fibb(n);
printf("%d", f);
    return 0;
}
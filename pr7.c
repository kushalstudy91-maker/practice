#include<stdio.h>
int main(){
    int n, m, l;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(n%i!=0){
            continue;
        } else{
            printf("Your number isn't prime");
        }
    }
}
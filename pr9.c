#include<stdio.h>

int average(int, int, int);
int average(int l, int m, int n){
    int a;
    a = (l+m+n)/3;
    return a;
}
int main(){
int z=average(22,8,6);
printf("%d", z);
    return 0;
}
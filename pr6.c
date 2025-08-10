#include<stdio.h>
int main(){
    // Converting into binary(upto 8 number of bits)
    // This program converts a decimal number into binary format
    int a, b ,c ,d, e, i, m;
    printf("Enter your number: \n");
    scanf("%d", &a);
    b = a;
    i=0, e=2;
    while(i<8){
        c=b%e;
        printf("%d", c);
        d=b/e;
        b=d;
        i++;};
    return 0;
}
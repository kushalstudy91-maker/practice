#include<stdio.h>
float fahrenheit(float);
float fahrenheit(float c){
    return ((1.8)*c)+32;
}
int main(){
    float f = fahrenheit(25);
    printf("%f", f);
    return 0;
}
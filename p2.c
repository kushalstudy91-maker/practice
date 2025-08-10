#include<stdio.h>
float grav(float);
float grav(float m){
    return m*9.8;
}
int main(){
    float m = 11;
float w = grav(m);
printf("The weight of a body with mass %f kg is %f N", m, w);
    return 0;
}
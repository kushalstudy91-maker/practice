#include <stdio.h>
int main(void)
{
int l,b,area;
printf("What is the length of the rectangle?\n");
scanf("%d", &l);
printf("What is the breadth of the rectangle?\n");
scanf("%d", &b);
printf("The area of the rectangle with length as %d and breadth as %d is %d.", l,b,l*b);
return 0;
}
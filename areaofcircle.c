#include <stdio.h>
#define pi 3.14

int main(void){

    int r, a;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    a = pi * r * r;

    printf("Area of circle is %d", a);
}
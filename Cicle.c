#include <stdio.h>
#define pi 3.14

int main(void){

    int r;
    float a, c;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    a = pi * r * r;
    c = 2 * pi * r;

    printf("Area of circle is %f\n", a);
    printf("Circumference of circle is %f", c);
}
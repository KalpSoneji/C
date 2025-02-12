#include <stdio.h>

int main(){

    int sum, mul, rem, div, *ptr, *ptr1, a, b;

    printf("Enter value of *ptr and *ptr1: ");
    scanf("%d %d", &a, &b);

    ptr = &a;
    ptr1 = &b;

    sum = *ptr + *ptr1;
    mul = *ptr * *ptr1;
    div = *ptr - *ptr1;
    rem = *ptr / *ptr1;

    printf("Sum: %d", sum);
    printf("Product: %d", mul);
    printf("Difference: %d", div);
    printf("Division: %d", rem);

}
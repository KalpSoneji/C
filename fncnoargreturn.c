#include <stdio.h>

int fact(){

    int fact=1, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
        fact *= i;
    return fact;

}

void main(){

    printf("Factorial: %d", fact());

}
#include <stdio.h>

void fact(int num){

    int fact=1;
    for(int i=1; i<=num; i++)
        fact *= i;
    printf("Factorial: %d", fact);

}

void main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact(num);

}
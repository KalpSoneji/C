#include <stdio.h>

void fact(){

    int num, fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
        fact *= i;

    printf("Factorial: %d", fact);
    
}

void main(){

    fact();

}
#include <stdio.h>

int main(){

    int num, fact=1, i=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<=num)
        fact*=i++;

    printf("Factorial: %d", fact);

}
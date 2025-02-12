#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) 
        fact *= i;

    return fact;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("Enter a number: ");
    scanf("%d", &c);
    printf("\nFactorial of %d is: %d\n", c, factorial(c));

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &a);
    
    if (isPrime(a)) 
        printf("%d is a prime number.\n", a); 
    
    else 
        printf("%d is not a prime number.\n", a);
    
    return 0;
}
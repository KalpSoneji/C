#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int limit, i = 0;

    printf("Enter a number: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: ", limit);
    while (1) {
        int fib = fibonacci(i);
        if (fib > limit)
            break; 
        printf("%d ", fib);
        i++;
    }
    printf("\n");

}
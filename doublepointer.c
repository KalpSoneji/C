#include <stdio.h>

int main(){

    int no = 10, *a, **b;
    a = &no; 
    b = &a;

    printf("Value of no: %u\n", no);
    printf("Address of no: %u\n", &no);
    printf("Value of a: %u\n", a);
    printf("Value stored at address of *a: %u\n", *a);
    printf("Address of a: %u\n", &a);
    printf("Value of b: %u\n", b);
    printf("Value stored at address of *a: %u\n", *b);
    printf("Address of *b: %u\n", &b);
    printf("Value stored at address of value stored at *a: %u\n", **b);

}
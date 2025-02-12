#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Value of a: %d\t", a);
    printf("Value of b: %d\n", b);

    /*c = a;
    a = b;
    b = c;*/

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a after swapping: %d\t", a);
    printf("Value of b after swapping: %d\n", b); 

}
#include <stdio.h>

int main(void){

    int a, b;

    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);

    if(a>b)
        printf("a is max.\n");
    else if(b>a)
        printf("b is max.");
    else
        printf("Equal.");

}
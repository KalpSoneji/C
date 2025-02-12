#include <stdio.h>

int main(void){

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(int i = 1; i < 11; i++)
        printf("%d * %d = %d\n", a, i, a*i);

}
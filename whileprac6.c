#include <stdio.h>

int main(){

    int i=1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<11){
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }

}
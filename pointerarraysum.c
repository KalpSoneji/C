#include <stdio.h>

int main(){

    int a[10], *ptr, i, sum=0;

    ptr = &a[0];

    for(i=0; i<10; i++){
        printf("Enter value of a[%d]: ", i);
        scanf("%d", ptr);

        sum += *ptr;
    }

    printf("\nSum of all elements: %d", sum);

}
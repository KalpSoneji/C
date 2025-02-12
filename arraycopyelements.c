#include <stdio.h>

int main(){

    int i, a[5], b[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("\nCopying elements from a to b.\n\n");

    for(i=0; i<5; i++)
        printf("b[%d]: %d\t", i, b[i]);

}
#include <stdio.h>

int main(){

    int i, a[5], b[5];

    printf("\nEnter elements of 1st array.\n\n");

    for(i=0; i<5; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("\nElements of 2nd array are: \n");

    for(i=0; i<5; i++){
        printf("b[%d]: %d\n", i, b[i]);
    }

}   
#include <stdio.h>

int main(){

    int i, max, a[5];

    for(i=0; i<5; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i=0; i<5; i++)
        if(a[i] > max)
            max = a[i];

    printf("\nMax value: %d", max);

}
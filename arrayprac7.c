#include <stdio.h>

int main(){

    int i, min, a[5];

    for(i=0; i<5; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(i=0; i<5; i++)
        if(a[i] < min)
            min = a[i];

    printf("\nMin value: %d", min);

}
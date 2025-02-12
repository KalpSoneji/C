#include <stdio.h>

int main(){

    int i, min, max, a[10];

    for(i=0; i<10; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for(i=0; i<10; i++){
        if(a[i] < min)
            min = a[i];
        else if(a[i] > max)
            max = a[i];
    }

    printf("\nMax value: %d", max);
    printf("\t\tMin value: %d", min);

}
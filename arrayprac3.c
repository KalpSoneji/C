#include <stdio.h>

int main(){

    int i, a[5], sum=0;

    for(i=0; i<5; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
        sum+=a[i];
    }

    printf("\nSum of all elements is: %d", sum);

}
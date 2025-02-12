#include <stdio.h>

int main(){

    int i, sum=0, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        sum+=a[i];
    }

    printf("\nSum = %d", sum);

}
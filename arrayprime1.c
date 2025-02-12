#include <stdio.h>

int main(){

    int b, i, j, n, count=0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Prime numbers are: ");

    for(i=0; i<n; i++){
        b = a[i];
        count=0;

        for(j=1; j<=b; j++){
            if(b % j == 0){
                count++;
            }
        }

        if(count == 2){
            printf("%d ", a[i]);
        }
    }

}
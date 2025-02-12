#include <stdio.h>

int main(){

    int i, j, n=0, count, fc, b;

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        printf("Enter value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        b = a[i];
        fc=0;

        for(j=1; j<=b; j++){
            if(b % j == 0){
                fc++;
            }
        }
        
         if(fc == 2){
                count++;
                printf("a[%d]: %d\n", i, a[i]);
            }
            
    }

            printf("The total prime count is %d", count);
}
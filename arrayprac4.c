#include <stdio.h>

int main(){

    int i, a[5], sum=0;

    for(i=0; i<5; i++){
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0){
            sum+=a[i];
        }
    }

    printf("Sum of even elements is: %d", sum);

}
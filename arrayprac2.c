#include <stdio.h>

int main(){

    int i, a[10];

    for(i=0; i<10; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Even values are: \n");

    for(i=0; i<10; i++){
        if(a[i] % 2 == 0){
            printf("a[%d]: %d\n", i, a[i]);
        }
    }
}
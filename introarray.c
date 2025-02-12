#include <stdio.h>

int main(){

    int i, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
        printf("a[%d]: %d\t", i, a[i]);
   
}


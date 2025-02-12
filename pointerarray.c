#include <stdio.h>

int main(){

    int a[5], *ptr;
    ptr = &a[0];

    for(int i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr);

        ptr += 1;       
    }

    ptr = &a[0];

    for(int i=0; i<5; i++){
        printf("Value of a[%d]: %d stored at address %d\n", i, *ptr, ptr);

        ptr += 1;
    }

}
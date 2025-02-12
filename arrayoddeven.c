#include <stdio.h>

int main(){

    int i, a[10];

    for(i=0; i<10; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOdd values: ");
    for(i=0; i<10; i++)
        if(a[i] % 2 == 1)
            printf("%d ", a[i]);

    printf("\n\nEven values: ");
    for(i=0; i<10; i++)
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    

}
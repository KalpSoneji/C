#include <stdio.h>

int main(){

    int i, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++){
        printf("a[%d]: %d", i, a[i]);
    }

    for(i=0; i<5; i++){
        
        if(a[i] >= 0){
            printf("Positive: ");
            printf("%d ", a[i]);
            printf("\n\n");
        }
        else if(a[i] < 0){
            printf("Negative: ");
            printf("%d ", a[i]);
        }

    }

}
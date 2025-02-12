#include <stdio.h>

int main(){

    int i, j, temp, a[10];

    for(i=0; i<10; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Before sorting: \n\n");
    
    for(i=0; i<10; i++)
        printf("a[%d] = %d\t", i, a[i]);
    
    for(i=0; i<10; i++){
        for(j=(i+1); j<10; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nAfter sorting: \n\n");
    
    for(i=0; i<10; i++)
        printf("a[%d] = %d\t", i, a[i]);

}
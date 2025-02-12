#include <stdio.h>

int main(){

    int i, j, a[10], count=0, no;

    for(i=0; i<10; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++){
        
        no = a[i];
        count=0;

        for(j=0; j<=no; j++)
            if(no % j == 0)
                count++;

        if(count == 2)
            printf("\na[%d] = %d is prime.", i, a[i]);

    }



}
#include <stdio.h>

int main(){

    int i, oddsum=0, evensum=0, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
        if(a[i] % 2 == 1)
            oddsum += a[i];
        else 
            evensum += a[i];
    }

    printf("\nSum of odd elements: %d", oddsum);
    printf("\t\tSum of even elements: %d", evensum);

}
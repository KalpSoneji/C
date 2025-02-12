#include <stdio.h>

int main(){

    int i, a[10], evencount=0, oddsum=0, min;

    for(i=0; i<10; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(i=0; i<10; i++){
        if(a[i] % 2 == 0)
            evencount++;
        else if(a[i] % 2 == 1)
            oddsum+=a[i];
        else if(min < a[i])
            min = a[i];
    }

    printf("\nCount of even numbers is %d", evencount);
    printf("\nSum of odd elements is %d", oddsum);
    printf("\nMinimum element: %d", min);


}
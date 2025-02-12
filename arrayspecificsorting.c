#include <stdio.h>

int main(){

    int i, j, start, end, temp, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter starting value & ending value: ");
    scanf("%d %d", &start, &end);

    for(i=start; i<=end; i++)
        for(j=(i+1); j<=end; j++)
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    printf("After sorting elements from %d to %d: \n\n", start, end);

    for(i=0; i<5; i++)
        printf("%d ", a[i]);

}
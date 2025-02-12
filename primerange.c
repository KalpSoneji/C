#include <stdio.h>

int main(){

    int i, j, fc, tp=0, start, end;

    printf("Enter starting & ending value: ");
    scanf("%d %d", &start, &end);

    for(i=start; i<=end; i++){
        
        fc=0;

        for(j=1; j<=i; j++)
            if(i % j == 0)
                fc++;

        if(fc == 2){
            tp++;
            printf("%d ", i);
        }

    }

    printf("\n\nTotal prime numbers are %d.", tp);

}   
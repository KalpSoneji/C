#include <stdio.h>

int main(){

    long int start, end, sum, i, j;

    printf("Enter starting range: ");
    scanf("%ld", &start);
    printf("Enter ending range: ");
    scanf("%ld", &end);

    for (i = start; i <= end; i++)
    {
        sum=0;

        for (j = 1; j < i; j++){
            if (i % j == 0)
                sum += j;;
        }
        
        if(sum == i)
            printf("%ld\t", i);
    }
}
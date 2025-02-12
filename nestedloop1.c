#include <stdio.h>

int main(){

    int start, end, count, i, j;

    printf("Enter starting range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        count=0;

        for (j = 1; j <= i; j++){
            if (i % j == 0)
                count++;
        }
        
        if(count == 2)
            printf("%d\t", i);
    }
}
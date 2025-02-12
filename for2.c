#include <stdio.h>

int main(void){

    int i, start, end, oddsum = 0, evensum = 0;

    printf("Enter start & end value: ");
    scanf("%d %d", &start, &end);

    for(i = start; i<=end; i++){

        if(i % 2 == 0)
            oddsum+=i;
        else
            evensum+=i;
        
    }
    printf("Sum of even numbers: %d\n", oddsum);
    printf("Sum of even numbers: %d", evensum);
        



    
}
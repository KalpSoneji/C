#include <stdio.h>

int main(){

    int i, j, sum, pc=0, start, end;

    printf("Enter starting & ending value: ");
    scanf("%d %d", &start, &end);

    for(i=start; i<=end; i++){
        
        sum=0;

        for(j=1; j<i; j++)
            if(i % j == 0)
                sum+=j;

        if(sum == i){
            pc++;
            printf("%d ", i);
        }
    }

    printf("\n\nTotal perfect count: %d", pc);

}
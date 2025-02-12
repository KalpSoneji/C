#include <stdio.h>

int main(){

    int start, end, r, i, j, sum,temp;

    printf("Enter starting range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++){
        
        sum=0;
        temp=i;
        
        for(; temp!=0;){
            r = temp % 10;
            sum += (r*r*r);
            temp=temp/10; 
        }

        if(sum == i)
        printf("%d\t", i);

    }

}
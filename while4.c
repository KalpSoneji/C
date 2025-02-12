#include <stdio.h>

int main(void){

    int num, sum = 0, i=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<num){
        if (num % i == 0){
            sum += i;
        }
        i++;
    }

    if(sum == num)
        printf("Perfect");
    else
        printf("Not perfect");

}
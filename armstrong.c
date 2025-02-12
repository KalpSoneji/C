#include <stdio.h>

int main(void){

    int num, sum = 0, i, r, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for(; num != 0; ){
        r = num % 10;
        sum += (r*r*r);
        num /= 10;
    }

    if(sum == temp)
        printf("Armstrong.");
    else
        printf("Not");

}
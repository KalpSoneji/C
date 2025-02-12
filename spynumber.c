#include <stdio.h>

int main(void){

    int num, r, temp, sum=0, product=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for( ; temp != 0; ){
        r = temp % 10;
        sum = sum + r;
        product = product * r;
        temp /= 10;
    }

    if(sum == product)
        printf("Twin number.");
    else
        printf("Not twin number.");

}
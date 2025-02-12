#include <stdio.h>
#include <math.h>

int main(void){

    int num, temp, i, r, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for( ; temp != 0; ){
        temp /= 10;
        count++;
    }

    temp = num;
    
    for( ; temp != 0; ){
        r = temp % 10;
        sum += pow(r, count);
        temp /= 10;
    }

    if(sum == num)
        printf("Armstrong");
    else
        printf("Not armstrong.");

}
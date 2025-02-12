#include <stdio.h>
#include <math.h>

int prime(int num){

    int flag=1;
    for(int i=2; i<=sqrt(num); i++)
        if(num % i == 0)
            flag=0;

    return flag;
}

void main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if(prime(num) == 1)
        printf("%d is a prime number.", num);
    else
        printf("%d isn't a prime number.", num);

}
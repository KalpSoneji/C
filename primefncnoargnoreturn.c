#include <stdio.h>
#include <math.h>

void prime(){

    int num, flag=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=2; i<=sqrt(num); i++)
        if(num % i == 0)
            flag=0;

    if(flag)
        printf("%d is a prime number.", num);
    else    
        printf("%d isn't a prime number.", num);

}

void main(){
    prime();
}
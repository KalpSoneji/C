#include <stdio.h>

int main(){

    int base, power, i=1, answer=1;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);
    
    while(i<=power){
        answer*=base;
        i++;
    }

    printf("Answer: %d", answer);
    
}
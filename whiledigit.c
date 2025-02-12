#include <stdio.h>

int main(){

    int num, count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num>0){
        num/=10;
        count++;     
    }

    printf("The no. of digits are: %d", count);

}
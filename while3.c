#include <stdio.h>

int main(){

    int num, count=0, i=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<=num){
        if(num % i == 0){
            count++;
        }
        i++;
    }

    if(count == 2){
        printf("Prime");
    }

}
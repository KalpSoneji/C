#include <stdio.h>

int sum(int num){

    if(num == 0)
        return 0;
    else    
        num += sum(num - 1);

    return num;

}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum: %d", sum(num));

}
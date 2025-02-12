#include <stdio.h>

int fact(int num){
    
    if(num < 1)
        return 1;

    else{
        num *= fact(num-1);
    }

    return num;
}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial: %d", fact(num));

}
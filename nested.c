#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c)
            printf("A");
        else    
            printf("C");
    }
    else{
        if(b>c)
            printf("B");
        else
            printf("C");
    }

}
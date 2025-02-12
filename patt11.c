#include <stdio.h>

int main(){

    int i, j, k;

    for(i=1; i<=5; i++){
        for(k=5; k>i; k--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i=4; i>=1; i--){
        for(j=(5-i); j>=1; j--){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }

}
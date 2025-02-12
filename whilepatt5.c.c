#include <stdio.h>

int main(){

    int i=6, j;

    while(i>=1){
        j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }

}
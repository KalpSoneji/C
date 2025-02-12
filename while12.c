#include <stdio.h>

int main(){

    int i=5, j, k;

    while(i>=1){

        j=5;

        while(j>i){
            printf(" ");
            j--;
        }

        k=i;

        while(k>=1){
            printf("%d", k);
            k--;
        }

        i--;
        printf("\n");
    }

}
#include <stdio.h>

int main(){

    int i=1, j, k;

    while(i<=5){
         
        j=5;

        while(j>i){
            printf(" ");
            j--;
        }

        k=i;

        while(k<=5){
            printf("*");
            k++;
        }

        i++;
        printf("\n");
    }

}
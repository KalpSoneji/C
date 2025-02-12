#include <stdio.h>

int main(){

    int i=1, j, k;

    while(i<=5){

        j=1;

        while(j<i){
            printf(" ");
            j++;
        }

        k=i;

        while(k<=5){
            printf("%d", k);
            k++;
        }

        i++;
        printf("\n");
    }

}
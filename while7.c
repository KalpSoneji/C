#include <stdio.h>

int main(){

    int i=1, j;

    while(i<=5){

        j=1;

        while(j<=i){

            printf("%d", i);
            j++;
        }

        i++;
        printf("\n");
    }

}
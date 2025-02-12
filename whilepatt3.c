#include <stdio.h>

int main(){

    int i=1, j, k;

    while(i<=5){
        k=(5-i);
        while(k>=1){
            printf(" ");
            k--;
        }
        j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    i=4;
    while(i>=1){
        k=(5-i);
        while(k>=1){
            printf(" ");
            k--;
        }
        j=1;
        while(j<=i){
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }

}
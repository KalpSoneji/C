#include <stdio.h>
#include <unistd.h>

int main(){

    int i, j, k;

    for(i=1; i<=5; i++){
        usleep(50000);
        for(k=(5-i); k>=1; k--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            usleep(50000);
            printf("*");
        }
        usleep(100000);
        printf("\n");
    }

}
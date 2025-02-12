#include <stdio.h>
#include <unistd.h>

int main(){

    int i, j;

    for(i=1; i<=5; i++){
        usleep(50000);
        for(j=1; j<=i; j++){
            printf("* ");
        }
        usleep(100000);
        printf("\n");
    }

}
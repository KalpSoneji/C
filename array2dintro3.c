#include <stdio.h>

int main(){

    int i, j, a[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]\t", i, j);
        }
        printf("\n");
    }

}
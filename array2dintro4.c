#include <stdio.h>

int main(){

    int i, j, k=0, a[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            k++;
            if(i == j){
                printf("%d\t",k);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

}
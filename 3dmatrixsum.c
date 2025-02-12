#include <stdio.h>

int main(){

    int i, j, k, a[2][3][4];

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                printf("Enter a[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
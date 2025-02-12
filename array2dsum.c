#include <stdio.h>

int main(){

    int i, j, a[2][2], b[2][2], c[2][2];

    printf("Enter values for matrix A. \n");

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter values for matrix B. \n");

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of matrices A & B: \n");

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


}
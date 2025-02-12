#include <stdio.h>

int main(){

    int i, j, k, n, sum, a[3][3], b[3][3], c[3][3];

    for(i=0; i<3; i++)
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++){
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum = 0;
            for(k=0; k<3; k++){
                sum += (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}


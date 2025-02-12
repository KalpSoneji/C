#include <stdio.h>

int main(){

    int i, j, a[3][3], rowsum=0, colsum=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        rowsum=0;
        for(j=0; j<3; j++){
            rowsum+=a[i][j];
        }
        printf("%d\n", rowsum);
    }

    for(i=0; i<3; i++){
        colsum=0;
        for(j=0; j<3; j++)
            colsum += a[j][i];
        printf("%d ", colsum);
    }

}
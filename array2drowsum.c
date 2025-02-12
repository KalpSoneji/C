#include <stdio.h>

int main(){

    int i, j, rowsum, a[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++){
        rowsum=0;
        for(j=0; j<3; j++){
            rowsum += a[i][j];
        }
        printf("\n%d. Rowsum = %d", i+1, rowsum);
    }

}
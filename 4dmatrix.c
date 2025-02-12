#include <stdio.h>

int main(){

    int i, j, k, l, a[2][3][2][2];

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<2; k++){
                for(l=0; l<2; l++){
                    printf("Enter a[%d][%d][%d][%d]: ", i, j, k, l);
                    scanf("%d", &a[i][j][k][l]);
                }
            }
        }
    }

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            for(k=0; k<2; k++)
                for(l=0; l<2; l++)
                    printf("%d ", a[i][j][k][l]);

}
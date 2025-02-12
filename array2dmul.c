#include <stdio.h>

int main(){

    int i, j, mul, a[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter a number: ");
    scanf("%d", &mul);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j] * mul);
        }
        printf("\n");
    }

}
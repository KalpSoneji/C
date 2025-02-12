#include <stdio.h>

int main(){

    int i, j, a[3][3], flag=1;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i == j && a[i][j] !=1){
                flag=0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("\nIdentity matrix.");
    else
        printf("\nNot an identity matrix.");

}
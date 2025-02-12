#include <stdio.h>

int main(){

    int i, j, diagsum=0, a[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(i == j)
                diagsum += a[i][j];
        }
    }

    printf("\nSum of diagnol elements is %d.", diagsum);

}
#include <stdio.h>

int main(){

    int i, j, a[3][3];

    for(i=0; i<3; i++){     //i -> semester
        for(j=0; j<3; j++){     //j -> subject
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            printf("a[%d][%d]: %d\n", i, j, a[i][j]);

}
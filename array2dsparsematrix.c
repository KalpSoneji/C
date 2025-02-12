#include <stdio.h>

int main(){

    int i, j, size, count0=0;

    printf("Enter size: ");
    scanf("%d", &size);

    int a[size][size], b[size][size];

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                count0++;
        }
    }

    if(count0 > (size*size)/2)
        printf("Sparse matrix.");
    else
        printf("Not a sparse matrix.");

}
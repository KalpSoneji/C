#include <stdio.h>

int main(){

    int i=5, j, k;

    do
    {
        j=1;

        do{
            printf(" ");
            j++;
        } while (j<(7-i));

        k=1;

        do{
            printf("* ");
            k++;
        } while (k<=i);

        printf("\n");
        i--;
        
    } while (i>=1);
    

}
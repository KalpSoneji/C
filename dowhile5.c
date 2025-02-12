#include <stdio.h>

int main(){

    int i=1, j, k;

    do{
        j=1;
        do{
            printf(" ");
            j++;
        } while(j<=i);

        k=1;
        do
        {
            printf("*");
            k++;
        } while (k<=(6-i));
        
        printf("\n");
        i++;

    }while (i<6);

}
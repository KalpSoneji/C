#include <stdio.h>

int main(){

    int i=1, j;

    do
    {
        j=1;

        do{
            printf("%d", j);
            j++;
        } while (j<=i);

        printf("\n");
        i++;
        
    } while (i<=5);
    

}
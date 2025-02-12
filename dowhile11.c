#include <stdio.h>

int main(){

    int i=1, j;
    char letter='A';

    do{
        j=1;

        do
        {
            printf("%c", letter);
            j++;
        } while (j<=i);

        printf("\n");
        letter++;
        i++;
        
    } while (i<=5);
    

}
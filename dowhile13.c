#include <stdio.h>

int main(){

    int i=1, j;
    char letter = 'X';

    do{
        j=1;

        do{
            printf("%c ", letter++);
            j++;
        } while (j<=i);

        printf("\n");
        i++;
        
    } while (i<=5);
    

}
#include <stdio.h>

int main(){

    int i=1, j, num=1;

    do{
        j=1;

        do{
            printf("%d ", num++);
            j++;
        } while (j<=i);

        printf("\n");
        i++;
        
    } while (i<=5);
    

}
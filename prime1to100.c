#include <stdio.h>

int main(){

    int i, j, no, fc, tp=0;

    for(i=0; i<=32767; i++){
        
        no = i;
        fc=0;

        for(j=1; j<=no; j++)
            if(no % j == 0)
                fc++;

        if(fc == 2){
            tp++;
            printf("%d ", no);
        }

    }
    
    printf("\nTotal prime: %d", tp);    

}
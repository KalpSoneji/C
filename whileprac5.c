#include <stdio.h>

int main(){

    int i=1, osum=0, esum=0;

    while(i<=10){
        if(i%2==1)
            osum+=i;
        else
            esum+=i;
        i++;
    }

    printf("odd sum = %d\t", osum);
    printf("even sum = %d", esum);

}
#include <stdio.h>

int main(){

    int i, temp, sum=0, mul=1, rem, sc=0;

    for(i=10; i<=32767; i++){
        
        temp = i;
        sum = 0;
        mul = 1;

        for(; temp!=0; ){
            rem = temp % 10;
            sum += rem;
            mul *= rem;
            temp /= 10;
        }

        if(sum == mul){
            sc++;
            printf("%d ", i);
        }
    }

    printf("\n\nTotal spy count = %d", sc);

}
#include <stdio.h>
#include <math.h>

int main(){

    int i, j, temp, count=0, rem, sum=0, ac=0;

    for(i=10; i<=32767; i++){
        
        temp = i;
        count = 0;

        while (temp != 0)
        {
            temp/=10;
            count++;
        }
                
        temp = i;
        sum = 0;

        while(temp != 0){
            rem = temp % 10;
            sum = sum + pow(rem, count);
            temp /= 10;
        }

        if(sum == i){
        printf("%d ", i);
        ac++;
        }
    }

    printf("\n\nTotal armstrong count: %d", ac);

}
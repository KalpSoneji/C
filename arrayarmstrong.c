#include <stdio.h>
#include <math.h>

int main(){

    int i, j, rem=0, temp, num, a[5], count=0, sum;

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            num = a[0];

            while(a[i]!=0){
                a[i] /= 10;
                count++;
            }

            num = a[i];
            sum = 0;

            while(num != 0){
                rem = num % 10;
                sum = sum + pow(rem, count);
                num /= 10;
            }

            if(sum == a[i])
                printf("%d ", a[i]);
        }
    }

}
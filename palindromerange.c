#include <stdio.h>

int main(){

    int i, no, temp, rev, rem, start, end, pc=0;

    printf("Enter starting & ending value: ");
    scanf("%d %d", &start, &end);

    for(i=start; i<=end; i++){
        
        rev = 0;
        temp = i;

        for(; temp>0; ){
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp/=10;
        }

        if(rev == i){
        pc++;
        printf("%d ", i);
        }

    }

    printf("\n\nTotal palindrome numbers are %d.", pc);

}
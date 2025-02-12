#include <stdio.h>

int main(){

    int i, j, rev, rem, num, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\nPalindrome numbers are: \n");

    for(i=0; i<5; i++){
        num = a[i];
        rev = 0; 
        for(; num>0; ){
            rem = num % 10;
            rev = (rev*10) + rem;
            num /= 10;
        }
        if(rev == a[i])
            printf("a[%d] : %d\n", i, a[i]);
    }

}


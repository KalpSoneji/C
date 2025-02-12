#include <stdio.h>

int main(){

    int i, a[10], temp, rev=0, no;

    for(i=0; i<10; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++){
        
        no = a[i];
        rev = 0;

        while(no > 0){
            temp = no % 10;
            rev = (rev * 10) + temp;
            no/=10;
        }

        if( rev == a[i])
            printf("\n%d is a palindrome found at %d", a[i], i);

    }

}
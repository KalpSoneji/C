#include <stdio.h>

int main(){

    int num, rev=0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for(; temp>0; ){
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    if(rev == num)
        printf("Palindrome.");
    else
        printf("Not palindrome.");

}
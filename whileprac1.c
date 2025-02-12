#include <stdio.h>

int main(){

    int i=1, n;

    printf("Enter ending value: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\t", i);
        i++;
    }

}
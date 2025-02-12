#include <stdio.h>

int main(void){
    
    int p, r, t, si;
    
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of interest: ");
    scanf("%d", &r);
    printf("Enter time: ");
    scanf("%d", &t);

    si = (p * r * t)/100;

    printf("%d", si);

}
#include <stdio.h>

int main(void){

    int a, b, c, total, avg;

    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    avg = total / 3;

    printf("Total: %d", total);
    printf("Avg: %d", avg); 

    if(avg>90)
        printf("A");
    else if(avg >= 80 && avg <= 90)
        printf("B");
    else if(avg >= 70 && avg <= 80)
        printf("C");
    else
        printf("F");

}
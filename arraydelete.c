#include <stdio.h>

int main(){

    int a[10], i, num, sub,j;

    printf("Enter the no. of elements you wanna insert: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray before: ");
    for(i=0; i<num; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("Enter the number you wanna remove: ");
    scanf("%d", &sub);

    for(i=0; i<num; i++)
        if(sub == a[i])
            break;

    for(j=i;j<num;j++)
        a[j] =a[j+1];

    num--;

    printf("Array after: ");
    for(i=0; i<num; i++)
        printf("%d ", a[i]);

}
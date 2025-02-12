#include <stdio.h>

int main(){

    int a[10], i, num, pos, add;

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

    printf("Enter the number you wanna add: ");
    scanf("%d", &add);
    printf("\nEnter the position: ");
    scanf("%d", &pos);

    num += 1;

    for(i=num; i>pos; i--)
        a[i] = a[i-1];

    a[pos] = add;

    printf("Array after: ");
    for(i=0; i<num; i++)
        printf("%d ", a[i]);

}
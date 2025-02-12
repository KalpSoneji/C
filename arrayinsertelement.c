#include <stdio.h>

int main(){

    int i, n=5, pos, ele, a[6];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &ele);

    for(i=n; i>=pos; i--)
        a[i] = a[i-1];

    a[pos-1] = ele;
    n++;

    printf("\n");

    for(i=0; i<n; i++)
        printf("a[%d] = %d\t\t", i, a[i]);

}
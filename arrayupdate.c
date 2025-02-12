#include <stdio.h>

int main(){

    int i, a[5], pos, new;

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the new updated element: ");
    scanf("%d", &new);

    printf("Enter the position: ");
    scanf("%d", &pos);

    a[pos] = new;

    for(i=0; i<5; i++)
        printf("%d ", a[i]);

}
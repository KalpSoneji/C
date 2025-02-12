#include <stdio.h>

int main(){

    int i, toSearch, a[5], flag=1;

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &toSearch);

    for(i=0; i<5; i++){
        if(a[i] == toSearch){
            flag=0;
            printf("\nElement %d found at %d position.", a[i], i+1);
        }
    }

    if(flag)
        printf("Element %d not found.", a[i]);

}
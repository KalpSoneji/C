#include <stdio.h>

int  main(){

    int searchvalue, i, a[10], flag=1;

    for(i=0; i<10; i++){
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &searchvalue);

    for(i=0; i<10; i++){
        if(searchvalue == a[i]){
            flag=0;
            printf("Element %d found at %d", a[i], i);
        }
    }

    if(flag)
        printf("%d isn't present in the array.", searchvalue);

}
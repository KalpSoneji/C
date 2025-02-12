#include <stdio.h>

void print(int a[], int size){

    for(int i=0; i<size; i++)  
        printf("%d ", a[i]);

}

int main(){
    
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int a[size];

    for(int i=0; i<size; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    print(a,size);

}
#include <stdio.h>

void scan(){

    int a[5];
    
    for(int i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

}

void print(){

    int a[5];

    for(int i=0; i<5; i++)
        printf("%d ", a[i]);

}

int main(){

    scan();
    print();

}
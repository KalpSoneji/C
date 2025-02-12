#include <stdio.h>

void scan(){

    int a[5];    

    for(int i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

}

int print(){

    int a[5];
    
    for(int i=0; i<5; i++)
        return a[i];

}

int main(){

    int a[5];

    scan();
    print();

    for(int i=0; i<5; i++)
        printf("%d ", a[i]);

}
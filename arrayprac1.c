#include <stdio.h>

int main(){

    int i, marks[10];

    for(i=0; i<10; i++){
        printf("Enter marks for marks[%d]: ", i);
        scanf("%d", &marks[i]);
    }

    printf("Marks are as follows: \n");

    for(i=0; i<10; i++){
        printf("Marks[%d]: %d\t", i, marks[i]);
    }

}
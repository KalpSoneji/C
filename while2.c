#include <stdio.h>

int main(){

    int start, end;

    printf("Enter start and end value: ");
    scanf("%d %d", &start, &end);

    while (start<=end){
            printf("%d\t", start++);
    }
    
}


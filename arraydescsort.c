#include <stdio.h>

int main(){

    int i, j, temp, a[5];

    for(i=0; i<5; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++){
        for (j=(i+1); j<5; j++)
        {
            if(a[j] > a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }   
    }
        
    for(i=0; i<5; i++)
        printf("%d ", a[i]);

}
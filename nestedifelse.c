#include <stdio.h>

int main(){

    int no1, no2, no3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    if(no1>no2){
        if(no1>no3){
            printf("No1 is max.");
        }
        else{
            printf("No3 is max.");
        }
    }
    else{
        if(no2>no3){
            printf("No2 is max.");
        }
        else{
            printf("No3 is max.");
        }
    }


}
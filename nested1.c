#include <stdio.h>

int main(void){

    int age;
    char gender;

    printf("Enter gender: ");
    scanf("%c", &gender);
    printf("Enter age: ");
    scanf("%d", &age);

    

    if(age>18){
        if(gender == 'm')
            printf("M, >18");
        else if(gender == 'f')
            printf("F, >18 ");
        else
            printf("O, >18");
    }
    else{
        if(gender == 'm')
            printf("M, <18");
        else if(gender == 'f')
            printf("F, <18 ");
        else
            printf("O, <18");
    }
}
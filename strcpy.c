#include <stdio.h>
#include <string.h>

int main(){

    char t1[20], t2[20];

    printf("Enter t1: ");
    scanf("%s", t1);

    strcpy(t2, t1);

    printf("%s\n", t1);
    printf("%s", t2);  

}
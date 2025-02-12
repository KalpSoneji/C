#include <stdio.h>
#include <string.h>

int main(){

    char t1[20], t2[20];

    printf("Enter 1st text: ");
    scanf("%s", t1);
    printf("Enter 2nd text: ");
    scanf("%s", t2);

    if(strcmp(t1, t2) == 0)
        printf("Equal");
    else
        printf("Different");

}
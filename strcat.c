#include <stdio.h>
#include <string.h>

int main(){

    char fname[20], sname[20];

    printf("Enter first name: ");
    scanf("%s", fname);
    printf("Enter last name: ");
    scanf("%s", sname);

    strcat(fname, sname);

    printf("First name: %s", fname);
    printf("\nLast name: %s", sname);

    /* To make it look better, use
    strcat(fname, " ");
    strcat(fname, sname); */

}
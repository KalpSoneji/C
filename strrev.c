#include <stdio.h>
#include <ctype.h>

int main(){

    char t1[20], t2[20];

    printf("Enter text: ");
    gets(t1);

    printf("%s", strrev(t1));

}
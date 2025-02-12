#include <stdio.h>

int main(){

    int i, len=0;
    char name[15];

    gets(name);

    for(i=0; name[i]!='\0'; i++)
        len++;

    puts(name);

    printf("Length: %d", len);

}
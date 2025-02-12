#include <stdio.h>
#include <string.h>

int main(){

    int name[15], len;

    gets(name);

    len = strlen(name);
    
    printf("Length: %d", len);

}
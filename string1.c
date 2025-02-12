#include <stdio.h>

int main(){

    int i;
    char name[10];

    for(i=0; i<10; i++)
        scanf("%c", &name[i]);

    name[i] = '\0';
    
    printf("%s\n", name);

}
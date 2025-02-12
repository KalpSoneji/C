#include <stdio.h>
#include <string.h>

int main(){

    char t1[20], t2[20];

    printf("Enter 1st text: ");
    gets(t1);
    printf("Enter 2nd text: ");
    gets(t2);

    printf("%s\n", strupr(t1));
    printf("%s", _strlwr(t2));

}
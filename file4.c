#include <stdio.h>

int main(){

    FILE *fp;
    char text[50];

    fp = fopen("h.txt", "r");

    fgets(text,sizeof(text),fp);

    printf("%s", text);

    fclose(fp);

}
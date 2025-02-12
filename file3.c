#include <stdio.h>

int main(){

    FILE *fp;
    char text[50];

    fp = fopen("g.txt", "r");

    while(fscanf(fp, "%s", text) != EOF)
        printf("%s ", text);

    fclose(fp);

}
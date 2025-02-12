#include <stdio.h>

int main(){

    FILE *fp;
    char text[200];

    fp = fopen("p.txt", "w");
    fprintf(fp, "Birds flying in the sky, you know how I feel.\nSomething in the sky, you know how I feel.");
    fclose(fp);

    fp = fopen("p.txt", "r");
    while(fscanf(fp, "%s", text) != EOF)
        printf("%s ", text);
    fclose(fp);

}
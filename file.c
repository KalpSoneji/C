#include <stdio.h>

int main(void){

    FILE *fp;
    char text[30];

    fp = fopen("a.txt", "w");
    fprintf(fp, "Heyyy");
    fclose(fp);
    
    fp = fopen("a.txt", "r");
    while(fscanf(fp, "%s", text) != EOF)
        printf("%s ", text);
    fclose(fp);

    return 0;
}
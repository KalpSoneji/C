#include <stdio.h>

int main(void){

    FILE *fp;
    char name;

    fp = fopen("a.txt", "w+"); //remove +

    while ((name = getchar()) != '\n')
        putc(name, fp);

    /*fclose(fp);

    fp = fopen("a.txt", "r");*/

    while((name = getc(fp)) != EOF)
        printf("%c", name);

    fclose(fp);

}
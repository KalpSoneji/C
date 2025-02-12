#include <stdio.h>

int main(){

    FILE *fp;

    fp = fopen("g.txt", "w");

    fprintf(fp, "My name is Anthony Gonzalves.");

    fclose(fp);

}


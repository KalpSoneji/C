#include <stdio.h>

int main(){

    FILE *fp;
    
    fp = fopen("h.txt", "w");

    fputs("The GOAT LM10.", fp);
    
    fclose(fp);

}
#include <stdio.h>

int main(){

    int whitespacecount=0, lwrcount=0, uprcount=0, symbolcount=0, numbercount=0;

    char text[50];
    
    printf("Enter a string: ");
    gets(text);

    for(int i=0; text[i] != '\0'; i++){
        if(text[i] >= 'A' && text[i] <= 'Z')
            uprcount++;
        else if(text[i] >= '0' && text[i] <= '9')
            numbercount++;
        else if(text[i] >= 'a' && text[i] <= 'z')
            lwrcount++;
        else if(text[i] == ' ')
            whitespacecount++;
        else
            symbolcount++;
    }

    printf("Whitespace count: %d\n", whitespacecount);
    printf("Lowercase characters: %d\n", lwrcount);
    printf("Uppercase characters: %d\n", uprcount);
    printf("Number count: %d\n", numbercount);
    printf("Symbol count: %d", symbolcount);

}
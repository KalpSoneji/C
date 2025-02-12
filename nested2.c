//ask user to enter the character  and check whtether tt is vowel or consonant  or special character or digit

#include <stdio.h>

int main(void){

    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        printf("Vowel");
    else if(a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9' || a == '0')
        printf("Number");
    else if(a == '@' || a == '#' || a == '$')
        printf("Special symbol");
    else
        printf("Consonant");
}
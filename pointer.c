#include <stdio.h>

int main(void){

    int *ptr, no = 25;

    ptr = &no;

    printf("%d\n", no);
    printf("%d\n", *ptr);
    printf("%u\n", &no);
    printf("%u\n", ptr);
    printf("%u", &ptr);

}
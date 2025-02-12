#include <stdio.h>

int main(){

    int no = 25, *a, **b;
    a = &no;
    b = &a;

    printf("%u\n", **b);
    printf("%u + 5000 = %d", **b, **b + 5000);

}
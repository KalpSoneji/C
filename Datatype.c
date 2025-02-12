#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, choice;
    float b;
    char c;
    double d;
    long int e;

    start:
    printf("Press 1 for integer.\n");
    printf("Press 2 for float.\n");
    printf("Press 3 for char.\n");
    printf("Press 4 for double.\n");
    printf("Press 5 for long int.\n");
    printf("Press 6 to exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: 
            printf("Enter an integer: ");
            scanf("%d", &a);
            printf("Entered integer is %d\n", a);
            break;
        case 2: 
            printf("Enter a float: ");
            scanf("%f", &b);
            printf("Entered float is %f\n", b);
            break;
        case 3: 
            printf("Enter a char: ");
            scanf("%c", &c);
            printf("Entered char is %c\n", c);
            break;
        case 4: 
            printf("Enter a double: ");
            scanf("%lf", &d);
            printf("Entered double is %lf\n", d);
            break;
         case 5: 
            printf("Enter a long int: ");
            scanf("%ld", &e);
            printf("Entered long int is %ld\n", e);
            break;
        case 6: 
            exit(1);
        default:
            printf("Invalid choice.");
            break;
    }

    goto start;
}
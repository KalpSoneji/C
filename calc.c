#include <stdio.h>
#include <stdlib.h>

void add();
void sub(int x, int y);
int mult();
int divi(int a, int b);

int main() {
    int choice, a, b, z;
    while (1) {
        printf("Press 1 for addition.\nPress 2 for subtraction.\n");
        printf("Press 3 for multiplication.\nPress 4 for division.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;

            case 2:
                printf("Enter value of a and b: ");
                scanf("%d %d", &a, &b);
                sub(a, b);
                break;

            case 3:
                z = mult();
                printf("Answer: %d\n", z);
                break;

            case 4:
                printf("Enter value of a and b: ");
                scanf("%d%d", &a, &b);
                z = divi(a, b);
                printf("Answer: %d\n", z);
                break;

            case 5:
                exit(0);

            default:
                printf("Enter valid option.\n");
                break;
        }
    }
}

void add() {
    int x, y, z;
    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Sum: %d\n", z);
}

void sub(int x, int y) {
    int z = x - y;
    printf("Difference: %d\n", z);
}

int divi(int a, int b) {
    if (b != 0) {
        int z = a / b;
        return z;
    } else {
        printf("Error: division by zero.\n");
        return 0;
    }
}

int mult() {
    int x, y, z;
    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);
    z = x * y;
    return z;
}

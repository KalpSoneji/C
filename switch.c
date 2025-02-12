#include <stdio.h>

int main(){

    int num1, num2, choice, result;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n1. Sum\t2. Difference\t3. Product\t4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result=num1+num2;
        printf("Result: %d", result);
        break;
    case 2: 
        result=num1-num2;
        printf("Result: %d", result);
        break;
    case 3:
        result=num1*num2;
        printf("Result: %d", result);
        break;
    case 4:
        result=num1/num2;
        printf("Result: %d", result);
        break;
    
    default:
        printf("Enter valid choice.");
        break;
    }

}
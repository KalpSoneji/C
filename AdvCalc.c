#include <stdio.h>
#include <math.h>

void add();
void sub();
void div();
void mul();
void odd_even();
void square_root();
void power();
void dollar_to_rupees();
void rupees_to_dirham();
void cm_to_m();
void kg_to_g();
void kg_to_quintal();
void fahrenheit_to_celsius();
void celsius_to_fahrenheit();
void SI();
void factorial();
void prime();
void gcd();
void lcm();
void logarithm();
void mod();
void square();

int main() {
    int choice;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Check Odd or Even\n");
        printf("6. Square Root\n");
        printf("7. Power\n");
        printf("8. Currency Convertor (Dollar to Rupees)\n");
        printf("9. Currency Convertor (Rupees to Dirham)\n");
        printf("10. Scale Convertor (cm to m)\n");
        printf("11. Scale Convertor (kg to g)\n");
        printf("12. Scale Convertor (kg to Quintal)\n");
        printf("13. Fahrenheit to Celsius\n");
        printf("14. Celsius to Fahrenheit\n");
        printf("15. Simple Interest\n");
        printf("16. Factorial\n");
        printf("17. Prime Number\n");
        printf("18. GCD (Greatest Common Divisor)\n");
        printf("19. LCM (Least Common Multiple)\n");
        printf("20. Logarithm (Base 10)\n");
        printf("21. Modulus\n");
        printf("22. Square of a Number\n");
        printf("23. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add(); break;
            case 2: sub(); break;
            case 3: div(); break;
            case 4: mul(); break;
            case 5: odd_even(); break;
            case 6: square_root(); break;
            case 7: power(); break;
            case 8: dollar_to_rupees(); break;
            case 9: rupees_to_dirham(); break;
            case 10: cm_to_m(); break;
            case 11: kg_to_g(); break;
            case 12: kg_to_quintal(); break;
            case 13: fahrenheit_to_celsius(); break;
            case 14: celsius_to_fahrenheit(); break;
            case 15: SI(); break;
            case 16: factorial(); break;
            case 17: prime(); break;
            case 18: gcd(); break;
            case 19: lcm(); break;
            case 20: logarithm(); break;
            case 21: mod(); break;
            case 22: square(); break;
            case 23: printf("Exiting the program.\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 23);

    return 0;
}

void add() {
    float a, b;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void sub() {
    float a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void div() {
    float a, b;
    printf("Enter two numbers to divide (a / b): ");
    scanf("%f %f", &a, &b);
    if(b != 0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Division by zero is not allowed.\n");
}

void mul() {
    float a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void odd_even() {
    int num;
    printf("Enter a number to check if it's odd or even: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);
}

void square_root() {
    float num;
    printf("Enter a number to find its square root: ");
    scanf("%f", &num);
    if (num >= 0)
        printf("Square Root: %.2f\n", sqrt(num));
    else
        printf("Square root of a negative number is not possible.\n");
}

void power() {
    float base, exponent;
    printf("Enter base and exponent: ");
    scanf("%f %f", &base, &exponent);
    printf("Result: %.2f\n", pow(base, exponent));
}

void dollar_to_rupees() {
    float dollars, rate = 83.93;  
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    printf("Equivalent in Rupees: %.2f\n", dollars * rate);
}

void rupees_to_dirham() {
    float rupees, rate = 0.044;  
    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);
    printf("Equivalent in Dirham: %.2f\n", rupees * rate);
}

void cm_to_m() {
    float cm;
    printf("Enter length in cm: ");
    scanf("%f", &cm);
    printf("Equivalent in meters: %.2f m\n", cm / 100);
}

void kg_to_g() {
    float kg;
    printf("Enter weight in kg: ");
    scanf("%f", &kg);
    printf("Equivalent in grams: %.2f g\n", kg * 1000);
}

void kg_to_quintal() {
    float kg;
    printf("Enter weight in kg: ");
    scanf("%f", &kg);
    printf("Equivalent in quintals: %.2f quintal\n", kg / 100);
}

void fahrenheit_to_celsius() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Equivalent in Celsius: %.2f\n", (fahrenheit - 32) * 5 / 9);
}

void celsius_to_fahrenheit() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Equivalent in Fahrenheit: %.2f\n", (celsius * 9 / 5) + 32);
}

void SI() {
    float principal, rate, time, interest;
    printf("Enter principal amount, rate of interest, and time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", interest);
}

void factorial() {
    int num, i;
    unsigned long long fact = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number is not possible.\n");
    else {
        for(i = 1; i <= num; ++i)
            fact *= i;
        printf("Factorial of %d is %llu\n", num, fact);
    }
}

void prime() {
    int num, i, is_prime = 1;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1)
        is_prime = 0;
    else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);
}

void gcd() {
    int a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD is %d\n", a);
}

void lcm() {
    int a, b, gcd, lcm;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &a, &b);

    int temp_a = a, temp_b = b;

    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    gcd = temp_a;

    lcm = (a * b) / gcd;
    printf("LCM is %d\n", lcm);
}

void logarithm() {
    float num;
    printf("Enter a number to find its logarithm (base 10): ");
    scanf("%f", &num);
    if (num > 0)
        printf("Logarithm of %.2f is %.2f\n", num, log10(num));
    else
        printf("Logarithm of non-positive numbers is not defined.\n");
}

void mod() {
    int a, b;
    printf("Enter two integers for modulus operation (a %% b): ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Result: %d\n", a % b);
    else
        printf("Modulus by zero is not allowed.\n");
}

void square() {
    float num;
    printf("Enter a number to find its square: ");
    scanf("%f", &num);
    printf("Square: %.2f\n", num * num);
}

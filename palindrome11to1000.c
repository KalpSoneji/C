#include <stdio.h>

int main() {
    int count = 0;

    // Iterate through numbers from 11 to 10000
    for (int num = 11; num <= 10000; num++) {
        int reversed = 0, original = num, remainder;

        // Reverse the number
        while (original != 0) {
            remainder = original % 10;
            reversed = reversed * 10 + remainder;
            original /= 10;
        }

        // Check if the number is a palindrome
        if (num == reversed){
            printf("%d ", num);
            count++;
        }
    }

    // Print the count of palindrome numbers
    printf("The count of palindrome numbers from 11 to 10000 is: %d\n", count);

    return 0;
}
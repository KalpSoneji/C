#include <stdio.h>
#include <math.h>

int main() {
    int start, end, r, i, sum, temp, count;

    printf("Enter starting range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        sum = 0;
        temp = i;
        count = 0;

        for( ; temp != 0; ) {
            temp /= 10;
            count++;
        }

        temp = i;

        for( ; temp != 0; ) {
            r = temp % 10;
            sum += pow(r, count);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d\t", i);
        }
    }

    return 0;
}

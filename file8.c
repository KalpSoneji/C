#include <stdio.h>

int main() {

    FILE *fp;
    int i, num;

    fp = fopen("m.txt", "w");
    for (i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);

    fp = fopen("m.txt", "r");
    printf("Numbers from the file:\n");
    while ((num = getw(fp)) != EOF) 
        printf("%d ", num);
    fclose(fp);

}

#include <stdio.h>

int main(){

    FILE *fp1, *fp2;
    int i, num;

    fp1 = fopen("odd.txt", "w");
    fp2 = fopen("even.txt", "w");

    for(i=0; i<10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num % 2 == 0)
            putw(num, fp2);
        else
            putw(num, fp1);
    }

    fclose(fp1);
    fclose(fp2);
    
    fp1 = fopen("odd.txt", "r");
    fp2 = fopen("even.txt", "r");
    
    printf("\nThese are the odd numbers: ");
    while((num = getw(fp1)) != EOF)
        printf("%d ", num);

    printf("\nThese are the even numbers: ");
    while((num = getw(fp2)) != EOF)
        printf("%d ", num);

    fclose(fp1);
    fclose(fp2);

}
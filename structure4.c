#include <stdio.h>

struct bank{
    int acno;
    char name[10];
    float balance;
};

int main(){

    struct bank b[3];

    int i;

    for(i=1; i<4; i++){
        printf("Enter details of customer %d\n", i);
        printf("Enter account number: ");
        scanf("%d", &b[i].acno);
        printf("Enter name: ");
        fflush(stdin);
        scanf("%s", &b[i].name);
        printf("Enter balance: ");
        scanf("%f", &b[i].balance);
    }

    printf("accno\tname\tbalance\n");
    for(i=1; i<4; i++)
        printf("%d\t%s\t%f\n", b[i].acno, b[i].name, b[i].balance);

    printf("\nPeople with balance less than 500: \n");
    for(i=1; i<4; i++)
        if(b[i].balance < 500)
            printf("%s\t", b[i].name);

    printf("\n\nPeople with balance more than 5000 incrementing by 1000: \n");
    for(i=1; i<4; i++)
        if(b[i].balance > 5000){
            printf("Name\tBalance\n");
            b[i].balance += 1000;
            printf("%s\t%f\n\n", b[i].name, b[i].balance);
        }

}
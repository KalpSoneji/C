#include <stdio.h>

struct Student{
    int rno;
    char name[30];
    float fees, maths,cse, sci;
}s[5];

int main(){

    float temp;

    for(int i=0; i<5; i++){
        printf("Enter rno: ");
        scanf("%d", &s[i].rno);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter fees: ");
        scanf("%f", &temp);
        printf("Enter marks of maths, cse and sci: ");
        scanf("%f %f %f", &s[i].maths, &s[i].cse, &s[i].sci);
        s[i].fees = temp;
    }

    printf("\nrno\tname\tfees\tmaths\tcse\tsci");

    for(int i=0; i<5; i++)
        printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f", s[i].rno, s[i].name, s[i].fees, s[i].maths, s[i].cse, s[i].sci);

}
#include <stdio.h>

struct database{
    int rno;
    char name[20];
    float marks;
}s[5];

int main(){

    //struct student s[3]; alternate ways to create objects

    int i, find;

    for(i=1; i<6; i++){
        printf("Enter rno of student %d: ", i);
        scanf("%d", &s[i].rno);
        printf("Enter name of student %d: ", i);
        fflush(stdin);
        scanf("%s", &s[i].name);
        printf("Enter marks of student %d: ", i);
        scanf("%f", &s[i].marks);
    }

    printf("rno\tname\tmarks\n");

    for(i=2; i<7; i=i+2)
        printf("%d\t%s\t%f\n\n", s[i].rno, s[i].name, s[i].marks);

}
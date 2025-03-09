#include <stdio.h>

struct student{
    int rno;
    char name[20];
    float marks;
}s[3];

int main(){

    int i;

    for(i=0; i<3; i++){
        printf("Enter rno of student %d: ", i);
        scanf("%d", &s[i].rno);
        printf("Enter name of student %d: ", i);
        fflush(stdin);
        scanf("%s", &s[i].name);
        printf("Enter marks of student %d: ", i);
        scanf("%f", &s[i].marks);
    }
        
    for(i=0; i<3; i++)
        printf("%d\t", s[i].rno);

    printf("\n");

    for(i=0; i<3; i++)
        printf("%d\t", s[i].marks);

}
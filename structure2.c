#include <stdio.h>

struct database{
    int rno;
    char name[20];
    float marks;
}s[3];

int main(){

    //struct student s[3]; alternate ways to create objects

    int i, find;

    for(i=1; i<4; i++){
        printf("Enter rno of student %d: ", i);
        scanf("%d", &s[i].rno);
        printf("Enter name of student %d: ", i);
        fflush(stdin);
        scanf("%s", &s[i].name);
        printf("Enter marks of student %d: ", i);
        scanf("%f", &s[i].marks);
    }

    printf("rno\tname\tmarks\n");
    
    for(i=0; i<3; i++)
        printf("%d\t%s\t%f\n\n", s[i].rno, s[i].name, s[i].marks);

    printf("Enter rno of student whose details you want: ");
    scanf("%d", &find);

    for(i=1; i<4; i++)
        if(find == i)
            printf("%d\t%s\t%f\n\n", s[i].rno, s[i].name, s[i].marks);

}
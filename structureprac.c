#include <stdio.h>

struct Student{
    int rno, marks;
    char name[30];
}s[3];

int main(){

    int i;
    
    for(i=1; i<4; i++){    
        
        printf("Enter rno of student %d: ", i);
        scanf("%d", &s[i].rno);
        fflush(stdin);
        printf("Enter name of student %d: ", i);
        gets(s[i].name);
        printf("Enter marks of the student %d: ", i);
        scanf("%d", &s[i].marks);
    }

    printf("\nrno\tname\tmarks\n");
    
    for(i=1; i<4; i++)
        printf("%d\t%s\t%d\n", s[i].rno, s[i].name, s[i].marks);

}
#include <stdio.h>

struct student{
    int rno, marks;
    char name[10];
};

struct student input(){
    struct student s;
    printf("Enter rno: ");
    scanf("%d", &s.rno);
    printf("Enter name: ");
    scanf("%s", &s.name);
    printf("Enter marks: ");
    scanf("%d", &s.marks);

    return s;
}

void display(struct student s){
    printf("rno: %d\n", s.rno);
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);
}

int main(){
    
    struct student s;

    s = input();

    display(s);

}

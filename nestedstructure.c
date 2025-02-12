#include <stdio.h>

struct student{
    int rno, marks;
    char name[30];
    
    struct date{
        int day, month, year;
    }dob;

};

struct student ScanData(struct student s){

    printf("Enter rno: ");
    scanf("%d", &s.rno);
    fflush(stdin);
    printf("Enter name: ");
    gets(s.name);
    printf("Enter marks: ");
    scanf("%d", &s.marks);
    printf("Enter day: ");
    scanf("%d", &s.dob.day);
    printf("Enter month: ");
    scanf("%d", &s.dob.month);
    printf("Enter year: ");
    scanf("%d", &s.dob.year);
    return s;

}

void DisplayData(struct student s){
    printf("%d\t%s\t%d\t%d\t%d\t%d\n", s.rno, s.name, s.marks, s.dob.day, s.dob.month, s.dob.year);
}

int main(){

    struct student s[3];

    for(int i=0; i<3; i++){
        printf("\nStudent 1\n");
        s[i] = ScanData(s[i]);
    }
        

    for(int i=0; i<3; i++)
        DisplayData(s[i]);

}
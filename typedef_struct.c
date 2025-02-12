#include <stdio.h>

    typedef struct{
        int day, month, year;
    }date;
    
    typedef struct {
        int rno, marks;
        char name[30];
        date dob;
    }student;

student ScanData(student s){

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

void DisplayData(student s){
    printf("%d\t%s\t%d\t%d\t%d\t%d\n", s.rno, s.name, s.marks, s.dob.day, s.dob.month, s.dob.year);
}

int main(){

    student s[3];

    for(int i=0; i<3; i++){
        printf("\nStudent %d\n", i+1);
        s[i] = ScanData(s[i]);
    }
        
    for(int i=0; i<3; i++)
        DisplayData(s[i]);

}
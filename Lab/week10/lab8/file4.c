#include <stdio.h>
#include <string.h>

typedef struct{
    char id[11];
    unsigned int midterm;
    unsigned int final; 
} Student;

void calculateGrade(Student * s,int n) {
    int i,score;
    char grade;
    for(i=0;i<n;i++){
        score = 0;
        score += s[i].midterm + s[i].final;
        if (score >= 80)
            grade = 'A';
        else if(score >= 70)
            grade = 'B';
        else if(score >= 60)
            grade = 'C';
        else if(score >= 50)
            grade = 'D';
        else
            grade = 'F';
        printf("Student ID %s receives grade %c.\n",s[i].id,grade);
    }
}


int main() {
    int i,n = 5;
    Student students[n];
    for(i=0;i<n;i++){
        printf("Enter Student ID: ");
        scanf("%s",students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d",&students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d",&students[i].final);
    }
    calculateGrade(students,n);

    return 0;
}
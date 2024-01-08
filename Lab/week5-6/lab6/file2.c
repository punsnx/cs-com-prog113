#include <stdio.h>
#include <stdlib.h>


int getGradeInt(char g){
    if (g == 'a'){
        return 4;
    } else if (g == 'b'){
        return 3;
    } else if (g == 'c'){
        return 2;
    } else if (g == 'd'){
        return 1;
    } else if (g == 'f'){
        return 0;
    }
    return 0;
}
int main() {
    int n_subjects;
    printf("Enter number of subject(s): ");
    scanf("\n%d",&n_subjects);
    int credit[n_subjects],sum_credit=0,sum_w_grade=0;char grade[n_subjects];
    float GPA;
    for (int i = 0;i<n_subjects;i++){
        printf("Enter credit,grade for subject #%d: ",i+1);
        scanf("%d,%c",&credit[i],&grade[i]);
        (grade[i] <= 90) ? grade[i] += 32 : grade[i];
        sum_credit += credit[i];
        sum_w_grade += (credit[i] * getGradeInt(grade[i]));
    }
    GPA = ((float)sum_w_grade) / sum_credit;
    printf("GPA = %.2f",GPA);
    

    return 0;
}
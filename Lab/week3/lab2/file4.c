#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salary_str[10];
    float salary,tax=0;
    fgets(salary_str,10,stdin);
    salary = atof(salary_str);
    if (salary < 0){
        printf("Error: Salary must be greater or equal to 0\n");
        return 0;
    }
    if (salary > 300000.00){
    tax += (salary-300000.00) * 0.10;
    salary -= (salary - 300000.00);
    }
    tax += salary * 0.05;
    printf("%.2f",tax);

    return 0;
}
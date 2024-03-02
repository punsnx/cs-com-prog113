#include <stdio.h>

double findAverage(char *filename)
{
	FILE * file = fopen(filename,"r");
	int n;
	double input,total=0;
	while((fscanf(file,"%lf",&input)) != -1){
		total += input;
		n++;
	}
	return total/n;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}
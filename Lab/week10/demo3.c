#include <stdio.h>
#include <string.h>
typedef struct {
    char id[13];//12+null terminator;
    unsigned int score;
} studentRecord;

void init(studentRecord list[], int size) {
    int cur_std_id = 55100000,i;
    for(i=0;i<size;i++)
    {
        sprintf(list[i].id,"%d",++cur_std_id);
        list[i].score = 0;        
    }
}

void enterScore(studentRecord list[], int size){
    int i,score,j,in_size,s_size;
    char id[13],*valid;
    for(i=0;i<size;i++)
    {//assign size ids
        scanf("%s %d",id,&score);
        for(j=0;j<size;j++){
            valid = strstr(list[j].id,id);
            if(valid!=0){
                list[j].score = score;
            }
        }
    } 
    
}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}
int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
    printRecords(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}
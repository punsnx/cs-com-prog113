#include <stdio.h>
#include <string.h>
typedef struct {
    char id[13];//12+null terminator;
    unsigned int score;
} studentRecord;

void init(studentRecord list[], int size) {
    int cur_std_id = 55100000,i,tmp_id,n_id;
    for(i=0;i<size;i++)
    {
        tmp_id = ++cur_std_id;//assign id to tmp each round
        for(n_id=0;tmp_id;tmp_id/=10,++n_id);//count n chars of tmp_id to add
        tmp_id = cur_std_id;
        //asign id part
        list[i].id[n_id] = 0;//add null terminator
        for(;n_id>0;--n_id)
        {
            list[i].id[n_id-1] =  tmp_id%10 + 48;
            tmp_id/=10;
        }
        //assign score 0
        list[i].score = 0;        
    }
}

void enterScore(studentRecord list[], int size){
    int i,score,j,n,m,n_e_id,n_s_id,valid;
    char id[13];
    for(i=0;i<size;i++)
    {//assign size ids
        scanf("%s %d",id,&score);
        for(n_e_id=0;id[n_e_id];n_e_id++);//n chars of enter id 1-n no null

        for(j=0;j<size;j++)
        {//search id in struct[]
            for(n_s_id=0;list[j].id[n_s_id];n_s_id++);//n chars of search id 1-n no null

            valid = 0;
            for(m=n_e_id,n=n_s_id;n>n_s_id-n_e_id;--n,--m)
            {//check if valid enter id and search id
                if(id[m-1] == list[j].id[n-1])
                    ++valid;
            }

            if (valid == n_e_id)
            {//asign score
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
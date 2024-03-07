#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct good {
        char name[20];
        struct good *next;
}Good;

Good *start = NULL;

void add_good(Good *new_good){
        Good *current_good = start;
        Good *previous_good = NULL;
        while(current_good){
                previous_good = current_good;
                current_good = current_good->next;
        }
        if(previous_good != NULL){
                previous_good->next = new_good;
        }else{
                start = new_good;
        }
}
int print_all_goods(){
        Good *cur_good = start;
        int count = 0;
        while(cur_good){
            printf("%s\n",cur_good->name);
            cur_good = cur_good->next;
            ++count;
        }
        return count;

}
main(){
        char name[20];
        int price;
        Good *new_node;
        printf("Name: ");
        scanf("%20s",name);

        while(strcmp(name,"done")){
                new_node = (Good *)malloc(sizeof(Good));
                strcpy(new_node->name,name);
                new_node->next = NULL;
                add_good(new_node);

                printf("Name: ");
                scanf("%20s",name);
        }

        printf("total = %d\n",print_all_goods());
}
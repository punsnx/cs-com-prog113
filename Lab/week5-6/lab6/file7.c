#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

	// initialize array numbers from 1 to num by numbersPtr
	for (i = 0; i < num ; numbersPtr = numbers + ++i) {
	   *numbersPtr = i+1;
       printf("%d ",numbers[i]);
	}
    printf("\n");
    

	// loop through count
	for (i = 0; i < count ; i++ ) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
	}

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (i = 0 ; i < num ; numbersPtr = numbers + ++i ) {
	       printf("%d ", *numbersPtr);
	}
	puts("");
	return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
    int i,j,hold;
    for ( i = 0; i<size; i++){
        if (*(array+i) == target){
            *(array+i) = 0;
            for ( j = i; j < size-1;j++){
                hold = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = hold;
            }
        }
    }
}


// int main() {
//     int i,a[] = {1,2,3,4,5,6,7,8,9};
//     int* p = &a;
//     for (i = 0; i < sizeof(a)/4 ; p += i+1 - i++ ){
//         printf("%d",*p);
//     }

// }
#include <stdio.h>
#define ARRAY_SIZE 98

int main() {

  int i, j;
  int A[ARRAY_SIZE] = {0};

  for (i = 2; i < ARRAY_SIZE; i++)
    A[i] = 1;

  for (j = 2; j*j <= ARRAY_SIZE-1; j++) {
    for(i = j+1; i < ARRAY_SIZE;i++){
        if (A[i] != 0 && i % j == 0){
            A[i] = 0;
        }
    }
  }

  for (i = 2; i < ARRAY_SIZE; i++)
    if (A[i] != 0)
        printf("%d ",i);

  printf("\n");

  return 0;
}
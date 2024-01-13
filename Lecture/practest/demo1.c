#include <stdio.h>

int main() {
  int* D2 = (int*)malloc(sizeof(int)*4*4);
  int**  D1 = (int**)malloc(sizeof(int*)*4);
  for (int i = 0; i< 4;i++){
      D1[i] = (int**)malloc(sizeof(int)*4);
      // *D1[i] = i;
      // D1[i][1] = i+1;
      
      for (int j =0;j<4;j++){
        D1[i][j] = j;
      }
      // D1[i] = &D2[i*4];
}
  

  return 0;
}
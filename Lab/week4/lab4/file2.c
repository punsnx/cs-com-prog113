#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    int devideAble=0;
    for (int i = 1; i <= x; i++){
        if (x % i == 0){
            devideAble += 1;
        }
    }
    if (devideAble == 2){
        return 1;
    }
    return 0;
}
int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (i = 0; i <= n;i++) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}
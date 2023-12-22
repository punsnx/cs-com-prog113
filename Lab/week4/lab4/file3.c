#include <stdio.h>
#include <stdlib.h>
int count_target(int n, int target)
{   
    int check,total=0;
    while (n != 0){
        check = n % 10;
        n /= 10;
        if (check == target){
            total += 1;
        }
    }
    return total;
}

int main() {
   char input_n[12], input_x[2];
   fgets(input_n, 12, stdin);
   fgets(input_x, 2, stdin);

   int n;
   int x, count;

   n = atoi(input_n);
   x = atoi(input_x);

   count = count_target(n, x);

   // Display output in separate cases
   //
   if (count <= 0) {
      printf("There is no \"%d\" in %d.\n", x, n);
   } else if (count == 1) {
      printf("There is only 1 \"%d\" in %d.\n", x, n);
   } else {
      printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
   }
   return 0;
}

// int main()
// {
//     char n_str[11],n_to_count_str[2];
//     int i=0,total=0;
//     fgets(n_str,11,stdin);fgets(n_to_count_str,3,stdin);
//     while (n_str[i] != 0){
//         if (n_str[i] == n_to_count_str[0]){
//             total += 1;
//         }
//         i++;
//     }
//     printf("There are %d \"%c\"(s) in %s.",total,n_to_count_str[0],n_str);
//     return 0;
// }
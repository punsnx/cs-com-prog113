#include <stdio.h>

int main() {
    int x=1, y=0, z=32;
    float i=65;
    char a='A', b='a';
    
    // 1. (b==a+z)&&(x>y)        /*Ans1 = ? */
    // 2. (y==z)&&(!y)           /*Ans2 = ? */
    // 3. (a/4==i/4)||(!z)       /*Ans3 = ? */
    // 4. (z>=y)&&(a!=65)        /*Ans4 = ? */
    // 5. (x*y)||(x)&&(z%5)      /*Ans5 = ? */
    // 6. (b<i)||(z/2)           /*Ans6 = ? */
    return 0;
}

// Ans1 = "T";
// Ans2 = "F";
// Ans3 = "F";
// Ans4 = "F";
// Ans5 = "T";
// Ans6 = "T";
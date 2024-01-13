#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}
    
	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (int i = 0; i < numPrisoners; i++) {
        static int c=0,t=0;
        // printf("c%d_i%d_t%d_%d\n",c,i,t,numPrisoners-c);
        if (t+m-1 >= numPrisoners-c){
            t = (t+m-1)-(numPrisoners-c);
        }else {
            t += m-1;
        }
        while (t >= numPrisoners-c){
            t = t-(numPrisoners-c);
        }
        // printf("c%d_i%d_t%d_%d\n",c,i,t,numPrisoners-c);
        killerPtr = &prisoners[t];
        c++;
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}
    // printf("\n");

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int i,j,hold;
    for ( i = 0; i<size; i++){
        if (*(array+i) == killedPrisoner){
            *(array+i) = 0;
            for ( j = i; j < size-1;j++){
                hold = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = hold;
            }
        }
    }
    for (int a = 0; a < size;a++){
        printf("%d ", *(array+a));
    }
    printf("szie %d k %d\n",size,killedPrisoner);
}


// 12345678910
//   3  3  3
// 12457810
//  3  3  

	// for (int j,d=m-1,i = 0; i < numPrisoners; i++) {
    //     for (j = d ; j<numPrisoners && *(prisoners + j) != 0; j+=m){
    //         printf("%d %d %d %d\n",i,d,j,*(prisoners + j));
    //         killerPtr = (prisoners + j);
    //     }
    //     d = j-numPrisoners;
// 12345678910
// 12045678910
// 12045078910
// 12045078010
// 10045078010
// 10045008010
// 45810
// 4510
// 410
// 4

        // static int t=0;
        // if (i==0){
        //     t+=m-1;
        // }else if (t+m >= numPrisoners-i) {
        //     t = (t+m) - numPrisoners;
        // } else {
        //     t += m;
        // }


	// for (int i = 0; i < numPrisoners; i++) {
    //     static int c=0,t=0;
    //     if (i ==0 ){
    //         t = m-1;
    //     }
    //     while (t<numPrisoners-c && c-i == 0){
    //         printf("c%d_i%d_t%d_%d\n",c,i,t,numPrisoners-c);
    //         killerPtr = &prisoners[t];
    //         c++;
    //         if (t+m-1 >= numPrisoners-c){
    //             t = (t+m-1)-(numPrisoners-c);
    //         }else {
    //             t += m-1;
    //         }
    //     }
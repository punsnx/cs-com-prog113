#include "mylib.h"

int readInt() {
    char str[12];
    fgets(str, 12, stdin);
    return atoi(str);
}

float readFloat() {
    return 0.0;
}

char* readStr(int size) {
    return NULL;
}

void printIntArray(int arr[], int size) {
    printf("\n");
}
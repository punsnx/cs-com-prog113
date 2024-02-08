#include <stdio.h>
// ให้คืนตำแหน่งหน่วยความจำของโปรแกรม (ที่ได้ให้ pointer ใช้งานเสร็จแล้ว) กลับสู่ระบบ
// โดยกำหนดการใช้งานหน่วยความจำดังนี้
int main() {
    float **ptr;
    int i,m,n;
    ptr=(float**)malloc(m*sizeof(float*));
    for(i=0;i<m;i++)
        ptr[i]=(float*)malloc(n*sizeof(float));
    /* Do something with ptr */

    // Ans1  = "for(i=0;i<m;i++)";
    // Ans2  = "free(ptr[i]);";
    // Ans3  = "free(ptr);";
    return 0;
}
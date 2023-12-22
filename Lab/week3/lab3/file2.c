#include <stdio.h>
#include <stdlib.h>

int main(){
    char m_str[12], n_str[12];
    fgets(m_str,12,stdin);fgets(n_str,12,stdin);
    long long M ,N ,GCD ,LCM;
    M = atoll(m_str);N = atoll(n_str);
    
    while (M != N){
        if (M > N){
            M = M - N;
        } else {
            N = N - M;
        }
    }
    GCD = M;
    M = atoll(m_str);N = atoll(n_str);
    LCM = M*N / GCD;
    printf("GCD: %lld\nLCM: %lld",GCD,LCM);
    return 0;
}
// int main(){
//     char m_str[12], n_str[12];
//     fgets(m_str,12,stdin);fgets(n_str,12,stdin);
//     long long M ,N ,GCD ,LCM;
//     M = atoll(m_str);N = atoll(n_str);
//     GCD = 0;
//     for (int i=0;i<=M||i<=N;i++){
//         if ((M % i == 0 && N % i == 0) && i > GCD){
//             GCD = i;
//         }
//     }
//     LCM = M*N / GCD;
//     printf("GCD: %lld\nLCM: %lld",GCD,LCM);
//     return 0;
// }
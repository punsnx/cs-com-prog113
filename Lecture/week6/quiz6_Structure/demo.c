#include <stdio.h>
#include <stdlib.h>

int main() {

    struct account {
        int number;
        float balance;
    };
    struct customer {
        int national_id;
        struct account account;
    };

    struct customer donald;
    donald.national_id = 14513;
    // donald.account = { 3 ,500.00 };

    return 0;
}
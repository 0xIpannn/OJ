#include <stdio.h>

int main() {
    unsigned long long int a, b, c, d;
    long long int sum[3];


    for (int i = 0; i < 3; i++) {
        scanf("(%lu+%lu)x(%lu-%lu)", &a, &b, &c, &d); getchar();

        sum[i] = (a+b)*(c-d);
    }

    printf("%ld %ld %ld\n", sum[0], sum[1], sum[2]);
}
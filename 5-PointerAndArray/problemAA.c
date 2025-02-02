#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int t, counter = 0;
    scanf("%d", &t);
    unsigned long long booked[5001] = {0};

    for (int i = 0; i < t; i++) {
        unsigned long long c;
        scanf("%llu", &c);

        if (!booked[c]) {
            booked[c] = 1;
            counter++;
        }
    }

    printf("%d\n", counter);
}
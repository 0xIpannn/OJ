#include <stdio.h>

int main() {
    long long int testCase, amount;

    scanf("%lld", &testCase);

    for (long long int i = 0; i < testCase; i++) {
        scanf("%lld", &amount);
        long long int lowest = 0; 
        unsigned long long int house[amount];

        for (long long int j = 0; j < amount; j++) {
            scanf("%llu", &house[j]);
        }

        for (long long int j = 0; j < amount - 1; j++) {
            long long int heightDiff = house[j] - house[j+1];
            if (heightDiff < 0) {heightDiff *= -1;}
            if (j == 0) {
                lowest = heightDiff;
            } else {
                lowest = (heightDiff < lowest) ? heightDiff : lowest;
            }
        }

        printf("Case #%lld: %lld\n", i + 1, lowest);
    }
}
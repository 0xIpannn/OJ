#include <stdio.h>

int main() {
    long long int num, strength, balloon, count = 0;

    scanf("%lld %lld", &num, &strength);

    for (int i = 0; i < num; i++) {
        scanf("%lld", &balloon);
        if (balloon < strength) {
            count++;
        }
    }

    printf("%lld\n", count);
}
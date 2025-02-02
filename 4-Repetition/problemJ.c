#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int amount;
        long long int num, sum = 0;
        scanf("%d", &amount);
        for (int j = 0; j < amount; j++) {
            scanf("%lld", &num);
            sum += num;
        }

        printf("Case #%d: %lld\n", i + 1, sum);
    }
}
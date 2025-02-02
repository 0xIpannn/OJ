#include <stdio.h>

int main() {
    long long int count, num, sum = 0;
    scanf("%lld", &count);
    for (int i = 0; i < count; i++) {
        scanf("%lld", &num);
        if (num > 0) sum += num;
    }

    printf("%lld\n", sum);
}
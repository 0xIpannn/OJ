#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i = 0; i < t; i++) {
        int n = 0, m = 0;
        scanf("%d %d", &n, &m); getchar();
        long long int highestSum = 0;
        for (int j = 0; j < n; j++) {
            long long int highest = 0;
            for (int k = 0; k < m; k++) {
                long long int num = 0;
                scanf("%lld", &num);
                highest = (num > highest) ? num : highest;
            }
            highestSum += highest;
        }
        printf("Case #%d: %lld\n", i + 1, highestSum);
    }
}
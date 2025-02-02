#include <stdio.h>

long long int getFibonacci(int n) {
    long long int result, a = 0, b = 1, c;
    if (n == 1) return a;
    if (n == 2) return b;
    for (int i = 0 ; i < n - 2; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        printf("Case #%d: %lld\n", i+1, getFibonacci(n));
    }
}
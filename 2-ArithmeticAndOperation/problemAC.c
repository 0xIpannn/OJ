#include <stdio.h>

int main() {
    long long int n = 0;
    long long int possibilities = 1;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++) possibilities *= 2;

    printf("%lld\n", possibilities - 1);
}
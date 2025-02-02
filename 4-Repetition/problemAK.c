#include <stdio.h>

int main() {
    int n, a, aBefore = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a <= aBefore) printf("%d ", aBefore);
        aBefore = a;
    }
    printf("%d\n", a);
}
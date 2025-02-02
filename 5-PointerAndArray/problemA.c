#include <stdio.h>

int main() {
    int n, q;
    scanf("%d", &n);
    int views[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &views[i]);
    }
    
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int a, b, sum = 0;
        scanf("%d %d", &a, &b);
        for (int j = a - 1; j <= b - 1; j++) {
            sum += views[j];
        }
        printf("Case #%d: %d\n", i + 1, sum);
    }
}
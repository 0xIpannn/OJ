#include <stdio.h>

int getPieces(int n) {
    return (n * ( n + 1)) / 2 + 1;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n = 0;
        scanf("%d", &n);

        printf("Case #%d: ", i + 1);
        for (int j = 0; j < n - 1; j++) {
            printf("%d ", getPieces(j));
        }
        printf("%d\n", getPieces(n - 1));
    }
}
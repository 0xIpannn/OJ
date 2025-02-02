#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    
    for (int i = 0; i <= 100; i++) {
        if ((x + i == y - i) && (x + i == k)) {
            printf("%d\n", i);
            return 0;
        }
    }
    
    printf("-1\n");
    return 0;
}
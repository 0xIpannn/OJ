#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    
    while (m >= 0) {
        printf("%d\n", n);
        n++;
        m--;
    }
}
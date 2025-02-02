#include <stdio.h>
#include <string.h>

int tillOne(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return tillOne(n/2);
    else return tillOne(n-1) + tillOne(n+1);
}

int main() {
    int t = 0;

    scanf("%d", &t);
                                                                                                                                                     
    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d\n", i, tillOne(n));
    }
}
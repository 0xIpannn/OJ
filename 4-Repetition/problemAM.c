#include <stdio.h>

int main() {
    unsigned int t;
    scanf("%u", &t);
    
    for (int i = 1; i <= t; i++) {
        int count;
        scanf("%d", &count);

        printf("Case #%d:\n", i);
        for (int j = 1; j <= count; j++) {
            if (j >= 15 && j % 15 == 0) {
                printf("%d Lili\n", j);
            } else if (j % 3 == 0 || j % 5 == 0) {
                printf("%d Jojo\n", j);
            } else {
                printf("%d Lili\n", j);
            }
        }
    }
}
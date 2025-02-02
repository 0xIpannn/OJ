#include <stdio.h>

void swap(char* str, int a, int b) {
    char temp = str[b];
    str[b] = str[a];
    str[a] = temp;
}

int main() {
    int t = 0;
    scanf("%d", &t); getchar();

    for (int i = 0; i < t; i++) {
        int q = 0;
        char str[1001];
        scanf("%d %s", &q, str); getchar();
        for (int j = 0; j < q; j++) {
            int l = 0, r = 0;
            scanf("%d %d", &l, &r); getchar();
            for (int k = 0; k <= (r-l) / 2; k++) {
                swap(str, l-1+k, r-1-k);
            }
        }
        printf("Case #%d: %s\n", i+1, str);
    }
}
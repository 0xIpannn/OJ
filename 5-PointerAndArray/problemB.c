#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int u;
        scanf("%d", &u);
        int ada[u + 1], butuh[u + 1];

        for (int j = 0; j < u; j++) {
            scanf("%d", &ada[j]);
        }
        for (int j = 0; j < u; j++) {
            scanf("%d", &butuh[j]);
        }

        printf("Case #%d: ", i + 1);
        for (int i = 0; i < u - 1; i++) {
            printf("%d ", ada[i] - butuh[i]);
        }
        printf("%d\n", ada[u - 1] - butuh[u - 1]);
    }
}
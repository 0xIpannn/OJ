#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int team[n + 1];
    int incomplete = 0;

    for (int i = 0; i <= n; i++) {
        team[i] = 0;
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            int member = 0;
            scanf("%d", &member);
            team[member]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (team[i] < n) incomplete++;
    }

    printf("%d\n", incomplete);
}
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i = 0; i < t; i++) {
        int n, lPick, bPick;

        scanf("%d", &n); getchar();
        int arr[n];

        for (int j = 0; j < n; j++) scanf("%d", &arr[j]); getchar();
        scanf("%d %d", &bPick, &lPick);
        lPick = arr[lPick-1];
        bPick = arr[bPick-1];

        printf("Case #%d : ", i+1);
        if (bPick > lPick) {
            printf("Bibi\n");
        } else if (lPick > bPick) {
            printf("Lili\n");
        } else {
            printf("Draw\n");
        }
    }   
}
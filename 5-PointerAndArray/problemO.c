#include <stdio.h>

int main() {
    int len = 0, isDuplicate = 0;
    scanf("%d", &len);
    int arr[len + 1][len + 1];

    // input arraynya
    for (int r = 0; r < len; r++) {
        for (int c = 0; c < len; c++) {
            scanf("%d", &arr[r][c]);
        }
    }

    // cek apakah ada yang duplicate
    for (int c = 0; c < len; c++) {
        int exist[101] = {0};
        for (int r = 0; r < len; r++) {
            if (exist[arr[r][c]]) {
                isDuplicate = 1;
            } else {
                exist[arr[r][c]] = 1;
            }
        }
    }

    if (isDuplicate) {
        printf("Nay\n");
    } else {
        printf("Yay\n");
    }

    return 0;
}
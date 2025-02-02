#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n = 0;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) scanf("%d", &arr[j]);

        printf("Case #%d: ", i + 1);
        for (int j = n - 1; j >= 0; j--) {
            if (j == 0) {
                printf("%d\n", arr[j]);
            } else {
                printf("%d ", arr[j]);
            }
        }
    }
}
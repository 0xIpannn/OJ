#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    int index[s], arr[s];

    for (int i = 0; i < s; i++) scanf("%d", &index[i]);

    for (int i = 0; i < s; i++) {
        int n = 0;
        scanf("%d", &n);
        arr[index[i]] = n;
    }

    for (int i = 0; i < s; i++) {
        if (i == s - 1) {
            printf("%d\n", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
}
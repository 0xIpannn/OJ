#include <stdio.h>

void printArray(int arr[], int s) {
    for (int i = 0; i < s; i++) {
        if (i == s - 1) {
            printf("%d\n", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int s;
    scanf("%d", &s);
    int price[s];

    for (int i = 0; i < s; i++) {
        int n = 0;
        scanf("%d", &n);
        price[i] = n;
    }

    int c;
    scanf("%d", &c);
    for (int j = 0; j < c; j++) {
        int pos, newVal;
        scanf("%d %d", &pos, &newVal);
        price[pos - 1] = newVal;

        printf("Case #%d: ", j + 1);
        printArray(price, s);
    }
}
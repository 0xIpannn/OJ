#include <stdio.h>

int main() {
    int t = 0, highest = 0;
    scanf("%d", &t);
    int arr[t + 1];

    for (int i = 0; i < t; i++) {
        int n = 0;
        scanf("%d", &n);
        arr[i] = n;
    }

    // inefficient as fuck since it checks EVERY element of the array.
    // but fuck it we ball.
    for (int i = 0; i < t; i++) {
        int count = 0;
        for (int j = 0; j < t; j++) {
            if (arr[i] == arr[j]) count++;
        }
        highest = (highest < count) ? count : highest;
    }

    printf("%d\n", highest);
}
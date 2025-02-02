#include <stdio.h>

int binarySearch(int *arr, int size, int target) {
    int left = 0;
    int right = size - 1;
    int targetKey = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            targetKey = mid + 1;
            right = mid - 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return targetKey;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < m; i++) {
        int target;
        scanf("%d", &target);
        int targetKey = binarySearch(arr, n, target);
        printf("%d\n", targetKey);
    }
}
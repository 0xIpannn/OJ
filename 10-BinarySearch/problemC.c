#include <stdio.h>

typedef long long unsigned llu;
typedef long long ll;

void swap(llu *x, llu *y) {
    llu temp = *x;
    *x = *y;
    *y = temp;
}

int partition(llu *arr, int left, int right) {
    llu pivot = arr[left];
    int j = left + 1;
    int k = right;

    while (1) {
        while (j <= k && arr[j] <= pivot) j++;
        while (j <= k && arr[j] > pivot) k--;
        if (j > k) break;

        swap(&arr[j], &arr[k]);
    }

    swap(&arr[left], &arr[k]);
    return k;
}

void quickSort(llu *arr, int left, int right) {
    if (left <= right) {
        int p = partition(arr, left, right);
        quickSort(arr, left, p - 1);
        quickSort(arr, p + 1, right);
    }
}

int binarySearch(ll *arr, int left, int right, llu m) {
    int idx = -1;
    while (left <= right) {
        int mid = (right - left) / 2 + left;
        if (arr[mid] <= m) {
            idx = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return idx;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    llu arr[n];
    for (int i = 0; i < n; i++) scanf("%llu", &arr[i]);
    quickSort(arr, 0, n - 1);

    ll sumArr[n + 1];
    sumArr[0] = 0;
    for (int i = 1; i <= n; i++) {
        sumArr[i] = sumArr[i - 1] + arr[i - 1];
    }

    int q = 0;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        llu m, sum = 0;
        scanf("%llu", &m);

        int index = binarySearch(sumArr, 1, n + 1, m);

        printf("Case #%d: %d\n", i + 1, index);
    }
}
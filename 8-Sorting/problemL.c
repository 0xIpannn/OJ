#include <stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int *arr, int left, int right) {
    int pivot = arr[left];
    int j = left + 1;
    int k = right;

    while (1) {
        while (j <= k && arr[j] <= pivot) j++;
        while (j <= k && arr[k] > pivot) k--;
        if (j > k) break;
        swap(&arr[j], &arr[k]);
    }
    swap(&arr[left], &arr[k]);
    return k;
}

int quickSort(int *arr, int left, int right) {
    if (left < right) {
        int p = partition(arr, left, right);
        quickSort(arr, left, p - 1);
        quickSort(arr, p + 1, right);
    }
}

int main() {
    int arr[] = {3, 1, 9, 10, 2, 5, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
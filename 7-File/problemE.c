#include <stdio.h>

int getArea(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total * 4;
}

int getPerimeter(int *arr, int size) {
    int perimeter = 2 * (2 * size); // total perimeter dr atas dan bawah
    perimeter += 2 * arr[0]; // perimeter sisi kiri
    perimeter += 2 * arr[size - 1]; // perimeter sisi kanan
    
    for (int i = 0; i < size - 1; i++) {
        int height = arr[i] - arr[i+1];
        if (height > 0) perimeter += height * 2;
    }

    for (int i = 1; i <= size - 1; i++) {
        int height = arr[i] - arr[i-1];
        if (height > 0) perimeter += height * 2;
    }

    return perimeter;
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int t = 0;
    fscanf(file, "%d\n", &t);

    for (int i = 0; i < t; i++) {
        int n = 0;
        fscanf(file, "%d\n", &n);
        int arr[n];

        for (int j = 0; j < n; j++) fscanf(file, "%d", &arr[j]);

        int perimeter = getPerimeter(arr, n);
        int area = getArea(arr, n);
        printf("Case #%d: %d %d\n", i+1, perimeter, area);
    }
}
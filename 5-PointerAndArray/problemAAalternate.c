#include <stdio.h>

#define MAX_N 5000

int main() {
    int N, rooms[MAX_N], used[MAX_N] = {0};
    int happy_guests = 0;

    // Kode Input
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &rooms[i]);
    }

    // Kode Proses
    for (int i = 0; i < N; i++) {
        if (!used[rooms[i]]) {
            used[rooms[i]] = 1;
            happy_guests++;
        }
    }

    // Output/Hasil
    printf("%d\n", happy_guests);

    return 0;
}
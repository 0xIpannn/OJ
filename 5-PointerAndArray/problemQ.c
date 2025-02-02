#include <stdio.h>

void light(int caseNum) {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    int pattern[n][m];
    int room[m];

    // biar semua ruangan 0 dlu
    for (int i = 0; i < m; i++) {
        room[i] = 0;
    }

    // input pola nya
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &pattern[i][j]);
        }
    }

    for (int i = 0; i < q; i++) {
        int p;
        scanf("%d", &p);
        for (int j = 0; j < m; j++) {
            room[j] ^= pattern[p-1][j]; // pake bitwise XOR buat nentuin kondisi lampu
        }
    }

    printf("Case #%d:\n", caseNum);
    for (int i = 0; i < m; i++) {
        printf("%s\n", (room[i] ? "YES" : "NO"));    
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        light(i);
    }
}
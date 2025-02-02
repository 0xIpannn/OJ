#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i = 0; i < t; i++) {
        int a, b, hasil = 0, kali = 1, tempSum;
        scanf("%d %d", &a, &b);

        while (a > 0 || b > 0) {
            tempSum = ((a % 10) + (b % 10)) % 10;
            hasil += tempSum * kali;
            a /= 10;
            b /= 10;
            kali *= 10;
        }

        printf("Case #%d: %d\n", i+1, hasil);
    }
}
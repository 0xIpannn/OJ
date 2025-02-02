#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int s;
        scanf("%d", &s);
        long long int arr[s][s];

        for (int r = 0; r < s; r++) {
            for (int c = 0; c < s; c++) scanf("%lld", &arr[r][c]);
        }

        printf("Case #%d: ", i + 1);
        for (int r = 0; r < s; r++) {
            long long int sum = 0;
            for (int c = 0; c < s; c++) sum += arr[c][r];
            if (r == s - 1) {
                printf("%lld\n", sum);    
            } else {   
                printf("%lld ", sum);
            }
        }
    }
}
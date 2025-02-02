#include <stdio.h>

int main() {
    int t = 0; 
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n = 0, failed = 0;
        scanf("%d", &n);
        int result[n], minimum[n];

        // input the results and minimum needed
        for (int j = 0; j < n; j++) scanf("%d", &result[j]); 
        for (int j = 0; j < n; j++) scanf("%d", &minimum[j]);

        for (int j = 0; j < n; j++) {
            if (result[j] < minimum[j]) failed++;
        }

        printf("Case #%d: %d\n", i + 1, failed);
    }
}
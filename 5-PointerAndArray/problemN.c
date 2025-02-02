#include <stdio.h>
#define MIN -1000001 // lebih kecil daripada int paling kecil yg ada di constraint

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int s = 0;
        scanf("%d", &s);

        int arr[s], max = MIN, secondMax = MIN;
        for (int j = 0; j < s; j++) scanf("%d", &arr[j]);

        for (int j = 0; j < s; j++) {
            if (arr[j] > max) {
                secondMax = max;
                max = arr[j];
            } else if (arr[j] > secondMax) {
                secondMax = arr[j];
            }
        }
        
        printf("Case #%d: %d\n", i + 1, max + secondMax);
    }
}
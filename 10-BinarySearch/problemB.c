#include <stdio.h>

typedef unsigned long long llu;
typedef long long ll;

llu getSum(llu num) {
    return (num * (num + 1) * (2*num + 1)) / 6;
}

ll binarySearch(llu target) {
    llu left = 1;
    llu right = target;
    ll result = -1;

    while (left <= right) {
        llu mid = (right + left) / 2;
        llu sum = getSum(mid);
        if (sum == target) {
            return mid;
        } else if (sum < target) {
            left = mid + 1;
        } else if (sum > target) {
            result = mid;
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        llu target, sum = 0;
        ll num = 0;
        scanf("%llu", &target);

        num = binarySearch(target);

        printf("Case #%d: %lld\n", i + 1, num);
    }
}
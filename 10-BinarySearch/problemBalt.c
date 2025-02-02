#include <stdio.h>

typedef long long ll;

ll sumOfSquares(ll N) {
    return (N * (N + 1) * (2 * N + 1)) / 6;
}

ll findSmallestN(ll M) {
    ll left = 1, right = 2000000; 
    ll result = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (sumOfSquares(mid) >= M) {
            result = mid;  
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int t = 1; t <= T; ++t) {
        ll M;
        scanf("%lld", &M);
        ll N = findSmallestN(M);
        printf("Case #%d: %lld\n", t, N);
    }

    return 0;
}

#include <stdio.h>

typedef long long ll;

int search(ll *arr, ll size, ll target) {
    ll left = 0; ll maxLen = 0;
    ll sum = 0;

    for (ll right = 0; right < size; right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum <= target && (right - left + 1) > maxLen) {
            maxLen = right - left + 1;
        }
    }

    return maxLen ? maxLen : -1;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        ll n, m;
        scanf("%lld %lld", &n, &m);
        ll arr[n];
        for (ll j = 0; j < n; j++) scanf("%lld", &arr[j]);
        ll key = search(arr, n, m);
        printf("Case #%d: %lld\n", i, key);
    }
}
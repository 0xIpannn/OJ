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
    ll n = 0;
    scanf("%lld", &n);

    ll arr[n];
    for (ll i = 0; i < n; i++) scanf("%lld", &arr[i]);

    ll q = 0;
    scanf("%lld", &q);

    for (ll i = 1; i <= q; i++) {
        ll m = 0;
        scanf("%lld", &m);

        ll key = search(arr, n, m);

        printf("Case #%lld: %lld\n", i, key);
    }
}
#include "bits/stdc++.h"
#define int long long
using namespace std;

int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;

    // Check if n is even or divisible by k
    if (n % 2 == 0 || n % k == 0) {
        cout << "YES" << endl;
        return;
    }

    // Check if we can reach an even number by subtracting multiples of k
    // n - mk should be even => n - mk ≡ 0 (mod 2)
    // This means n ≡ mk (mod 2)
    // Since k is odd, mk will be odd for odd m, and even for even m
    // Thus, we need to check if n is odd and if we can subtract an odd multiple of k
    if (k % 2 == 1) {
        cout << "YES" << endl;
        return;
    }

    // If k is even, we can only subtract even multiples of k
    // So we need to check if we can reach a number that is divisible by k
    // n - 2m should be divisible by k
    // This means n ≡ 2m (mod k)
    // We can check if n is odd and k is even
    cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
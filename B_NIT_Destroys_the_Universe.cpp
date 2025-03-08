#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;

    // Check if all elements are zero
    if (count(a.begin(), a.end(), 0) == n) {
        cout << 0 << "\n";
        return;
    }

    // Find the leftmost and rightmost non-zero positions
    int L = 0, R = n - 1;
    while (a[L] == 0) L++;
    while (a[R] == 0) R--;

    // Check if there's a zero between L and R
    bool hasZero = false;
    for (int i = L; i <= R; i++) {
        if (a[i] == 0) {
            hasZero = true;
            break;
        }
    }

    cout << (hasZero ? 2 : 1) << "\n";
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

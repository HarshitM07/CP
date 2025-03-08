#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    if (n < 3) { // If n is 2 or less, "YES" is always valid
        cout << "YES" << endl;
        return;
    }

    vi b(n - 2);
    for (auto &it : b) {
        cin >> it;
    }

    int i = 0, j = 2;

    while (j < n - 2) {
        // Extract the subarray correctly
        vi x = {b[i], b[i + 1], b[j]};
        
        if (x == vi{1, 0, 1}) { // Check for pattern {1,0,1}
            cout << "NO" << endl;
            return;
        }
        i++;
        j++;
    }
    
    cout << "YES" << endl;
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

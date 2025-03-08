#include "bits/stdc++.h"
using namespace std;



void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> g1;
    vector<pair<int, int>> g2;

    // Input for graph f (g1)
    for (int i = 0; i < a; i++) {
        int u, v;
        cin >> u >> v;
        if (u < v) {
            g1.push_back({u, v});
        } else {
            g1.push_back({v, u});
        }
    }

    // Input for graph g (g2)
    for (int i = 0; i < b; i++) {
        int u, v;
        cin >> u >> v;
        if (u < v) {
            g2.push_back({u, v});
        } else {
            g2.push_back({v, u});
        }
    }

    int cnt = 0;
    int add = 0;
    int remove = 0;
    // Check edges in g1 that are not in g2
    for (const auto& it : g1) {
        if (find(g2.begin(), g2.end(), it) == g2.end()) {
            remove++;
        }
    }

    // Check edges in g2 that are not in g1
    for (const auto& it : g2) {
        if (find(g1.begin(), g1.end(), it) == g1.end()) {
            add++;
        }
    }

    cout << add+remove << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

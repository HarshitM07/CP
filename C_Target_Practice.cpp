#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string> s(10);
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }

    int total = 0;
    int points = 1;
    int mini = 0, maxi = 9;

    while (mini <= maxi) {
        // Iterate through the whole ring
        for (int i = mini; i <= maxi; i++) {
            if (s[i][mini] == 'X') total += points; // Left column
            if (s[i][maxi] == 'X' && mini != maxi) total += points; // Right column
        }

        for (int j = mini + 1; j < maxi; j++) {
            if (s[mini][j] == 'X') total += points; // Top row
            if (s[maxi][j] == 'X') total += points; // Bottom row
        }

        mini++;
        maxi--;
        points++;
    }

    cout << total << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

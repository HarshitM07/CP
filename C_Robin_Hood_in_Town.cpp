#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        // If there is only one person, the answer is -1 as no one can be unhappy.
        if (n == 1 || n == 2) {
            cout << -1 << endl;
            continue;
        }

        // Sort the array to find the richest person easily.
        sort(arr.begin(), arr.end());

        // Calculate the total sum and the average wealth.
        double average = sum * 1.0 / n;

        // If more than half the people are already unhappy
        int cnt = 0;
        for (auto it : arr) {
            if (it < average / 2) cnt++;  // unhappy people
        }
        
        // If more than half are unhappy, the answer is 0.
        if (cnt > n / 2) {
            cout << 0 << endl;
            continue;
        }
        
        // Otherwise, calculate the minimum additional gold needed
        // x = (2 * arr[n/2] - average) * n
        long long x = ceil((arr[n / 2] * 2 - average) * n);
        cout << x + 1<< endl;
    }
    
    return 0;
}

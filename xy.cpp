#include <iostream>
#include <vector>

using namespace std;

void findPartitions(int n, int k, int start, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {  
        if (n == 0) 
            result.push_back(current);  // Valid partition
        return;
    }

    for (int i = start; i <= n - k + 1; i++) {  // Ensure space for remaining numbers
        current.push_back(i);
        findPartitions(n - i, k - 1, i + 1, current, result);  // i+1 ensures distinct numbers
        current.pop_back();  // Backtrack
    }
}

vector<vector<int>> partitionNumber(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    findPartitions(n, k, 1, current, result);
    return result;
}

int main() {
    int n = 10, k = 3;
    vector<vector<int>> partitions = partitionNumber(n, k);

    cout << "Different ways to partition " << n << " into " << k << " distinct numbers:\n";
    for (const auto& p : partitions) {
        for (int num : p) cout << num << " ";
        cout << "\n";
    }

    return 0;
}

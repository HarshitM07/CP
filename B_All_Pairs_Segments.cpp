#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x,y)  bitset<y>(x)
using namespace std;
int MOD=1e9+7;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly! ==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// =================================== END Of the input module ==========================================


// int f(unordered_map<int, int>& mpp, int target) {
//     int count = 0;
    
//     for (const auto& pair : mpp) {
//         if (pair.second == target) {
//             count++; 
//         }
//     }
//     return count;
// }
// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--){
//         int n, q;
//         cin>>n>>q;

//         vector<int>arr(n);
//         for(int i = 0; i<n; i++){
//             cin>>arr[i];
//         }

//         vector<int>k(q);
//         for(int i = 0; i<q; i++){
//             cin>>k[i];
//         }

//         vector<pair<int,int>>segments;

//         for(int i = 0; i<n; i++){
//             for(int j = i+1; j<n; j++){
//                 segments.push_back({arr[i], arr[j]});
//             }
//         }

//         int totalseg = segments.size();

//         int totpts = arr[n-1]-arr[0]+1;

//         unordered_map<int,int>mpp;

//         for(int i = arr[0]; i<=arr[n-1]; i++){
//             for(auto it : segments){
//                 if(i>=it.first && i<=it.second){
//                     mpp[i]++;
//                 }
//             }
//         }

//         vector<int>ans(q, 0);

//         for(int i = 0; i<q; i++){
//             int target = k[i];
//             int count  = f(mpp, target);

//             if(count>0) ans[i] = count;
//         }

//         for(auto it : ans){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
// }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> k(q);
        for (int i = 0; i < q; i++) {
            cin >> k[i];
        }

        // Create a difference array to count the number of segments containing each point
        unordered_map<int, int> diff;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Each segment starts from arr[i] and ends at arr[j]
                diff[arr[i]]++;       // Mark the start of the segment
                diff[arr[j] + 1]--;   // Mark the end of the segment (exclusive)
            }
        }

        // Convert the difference array into a prefix sum array
        unordered_map<int, int> count;
        int current_count = 0;

        for (int i = arr[0]; i <= arr[n - 1]; i++) {
            if (diff.find(i) != diff.end()) {
                current_count += diff[i]; // Apply the difference at point i
            }
            count[i] = current_count; // Store the result
        }

        // Answer the queries
        vector<int> ans(q, 0);
        for (int i = 0; i < q; i++) {
            if (count.find(k[i]) != count.end()) {
                ans[i] = count[k[i]];
            } else {
                ans[i] = 0; // If the point is outside the range, answer is 0
            }
        }

        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
    }
}
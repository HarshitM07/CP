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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        if(n == k){
            cout<<1<<endl;
        }
        else if(n<k){
            cout<<n<<endl;
        }
        else if(k == 1){
            cout<<n<<endl;
        }
        else{
            int cnt = 0;
        while (n > 0) {
            cnt+=n%k;
            n = n/k;
        }

        cout << cnt << endl;
        }
    }
    return 0;
}

// #include "bits/stdc++.h"
// #define int long long
// using namespace std;

// // Function to find the largest power of k less than or equal to n
// int largest_power(int n, int k) {
//     int left = 0, right = 63;  // max value of p (log2(10^18) is around 60+)
//     int best = 0;

//     // Binary search over exponent p
//     while (left <= right) {
//         int mid = (left + right) / 2;
//         // Use powl for large integer exponentiation
//         int power = powl(k, mid);

//         if (power <= n) {
//             best = mid;
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return powl(k, best);  // return the largest k^best <= n
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         if (n == k) {
//             cout << 1 << endl;
//         }
//         else if (n < k) {
//             cout << n << endl;
//         }
//         else if (k == 1) {
//             cout << n << endl;  // For k = 1, every step subtracts 1, so answer is n
//         }
//         else {
//             int cnt = 0;
//             while (n > 0) {
//                 // Find the largest power of k <= n using binary search
//                 int largest_pow = largest_power(n, k);
//                 n -= largest_pow;  // Subtract the largest power of k from n
//                 cnt++;
//             }
//             cout << cnt << endl;
//         }
//     }

//     return 0;
// }

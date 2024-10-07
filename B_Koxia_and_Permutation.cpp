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

int operation(const vector<int>& perm, int k, int n) {
    int maxi = LLONG_MIN;  // Use LLONG_MIN for long long
    for (int i = 0; i <= n - k; i++) {  // Fix the indexing to 0-based
        int maxi1 = -1e9;
        int mini1 = 1e9;
        for (int j = i; j < i + k; j++) {  // 0-based indexing, j should be in [i, i+k-1]
            maxi1 = max(maxi1, perm[j]);
            mini1 = min(mini1, perm[j]);
        }
        maxi = max(maxi, maxi1 + mini1);  // Track maximum value of (maxi1 + mini1)
    }
    return maxi;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> perm;
        vector<int> min_perm;

        for (int i = 1; i <= n; i++) {
            perm.push_back(i);
        }

        int min_value = __LONG_LONG_MAX__;  

    
    do {
        
        int result = operation(perm, k, n);
        
        
        if (result < min_value) {
            min_value = result;
            min_perm = perm; 
        }

    } while (next_permutation(perm.begin(), perm.end()));

    for (int num : min_perm) {
        cout << num << " ";
    }
    cout << endl;

    }
}
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
void solve(){
    int n,p;
    cin>>n>>p;
    vi a(n);
    for(auto &x : a)cin>>x;
    vi b(n);
    for(auto &x : b)cin>>x;

    vector<pair<int, int>>vec(n);

    for(int i = 0; i<n; i++){
        vec[i] = {b[i], a[i]};
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>a, const pair<int, int>b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    int ans = 0;
    int cost = p;
    int informed = 1;

    int peopletoinform = n-1;
    
    // for(int i = 0; i<n; i++){
    //     int pts = vec[i].first;
    //     int caninform = vec[i].second;
    //     if(peopletoinform - caninform -1>=0){
    //         cost = cost + (pts*caninform) + p;
    //         peopletoinform -= (caninform+1);
    //     }
    //     else{
    //         cost = cost + (pts*(peopletoinform-1)) + p;
    //         peopletoinform = 0;
    //         break;
    //     }
    //     // peopletoinform--;
    // }
    for(auto it : vec){
        int caninform = it.second;
        int pts = it.first;
        if(pts > p) break;
        cost = cost+(pts* min(caninform, n-informed));
        informed+= min(caninform, n-informed);
    }
    cost = cost + (n-informed)*p;
    cout<<cost<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
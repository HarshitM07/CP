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
void solve(vi &ans){
    int n;
    cin>>n;
    int cnt = 0;
    
    for(auto it : ans){
        if(it>n) break;
        cnt++;
    }
    cout<<cnt<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>ans;
    for(int i = 1; i<=999999; i++){
        if(i<=10){
            ans.push_back(i);
        }
        else if(i>10 && i<=100){
            if(i%10 == 0){
                ans.push_back(i);
            }
        }
        else if(i>100 && i<=1000){
            if(i % 100 == 0){
                ans.push_back(i);
            }
        }
        else if(i>1000 && i<=10000){
            if(i%1000 == 0){
                ans.push_back(i);
            }
        }
        else if(i>10000 && i<=100000){
            if(i%10000 == 0){
                ans.push_back(i);
            }
        }
        else if(i>100000 && i<1000000){
            if(i%100000 == 0){
                ans.push_back(i);
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        solve(ans);
    }
}
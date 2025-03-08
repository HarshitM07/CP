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
    int n;
    cin>>n;
    vi a(n), b(n);
    for(auto &it : a){
        cin>>it;
    }
    for(auto &it : b){
        cin>>it;
    }

    int i = 0, j = 0;
    vi res;
    int maxcnt = 1;
    int cnt = 1;
    while(i<n && j<n){
        if(res.empty()){
            res.push_back(a[i]);
            i++;
        }
        else{
            if(res.back() == a[i]){
                res.push_back(a[i]);
                i++;
                cnt++;
                maxcnt = max(cnt, maxcnt);
            }else if(res.back() == b[j]){
                res.push_back(b[j]);
                j++;
                cnt++;
                maxcnt = max(cnt, maxcnt);
            }
            else{
                res.push_back(a[i]);
                i++;
                cnt = 1;
            }
        }
    }
    while(i<n){
        if(res.back() == a[i]){
            cnt++;
            maxcnt = max(cnt, maxcnt);
        }
        else{
            cnt = 1;
        }
        res.push_back(a[i]);
        i++;  
    }
    while(j<n){
        if(res.back() == b[j]){
            cnt++;
            maxcnt = max(cnt, maxcnt);
        }
        else{
            cnt = 1;
        }
        res.push_back(b[j]);
        j++;
    }
    i = 0;
    j = 0;
    vi res1;
    int maxcnt1 = 1;
    int cnt1 = 1;
    while(i<n && j<n){
        if(res1.empty()){
            res1.push_back(b[j]);
            j++;
        }
        else{
            if(res1.back() == a[i]){
                res1.push_back(a[i]);
                i++;
                cnt1++;
                maxcnt1 = max(cnt1, maxcnt1);
            }else if(res1.back() == b[j]){
                res1.push_back(b[j]);
                j++;
                cnt1++;
                maxcnt1 = max(cnt1, maxcnt1);
            }
            else{
                res1.push_back(a[i]);
                i++;
                cnt1 = 1;
            }
        }
    }
    while(i<n){
        if(res1.back() == a[i]){
            cnt1++;
            maxcnt1 = max(cnt1, maxcnt1);
        }
        else{
            cnt1 = 1;
        }
        res1.push_back(a[i]);
        i++;  
    }
    while(j<n){
        if(res1.back() == b[j]){
            cnt1++;
            maxcnt1 = max(cnt1, maxcnt1);
        }
        else{
            cnt1 = 1;
        }
        res1.push_back(b[j]);
        j++;
    }
    i = 0, j = 0;
    vi res2;
    int maxcnt2 = 1;
    int cnt2 = 1;
    while(i<n && j<n){
        if(res2.empty()){
            res2.push_back(a[i]);
            i++;
        }
        else{
            if(res2.back() == a[i]){
                res2.push_back(a[i]);
                i++;
                cnt2++;
                maxcnt2 = max(cnt2, maxcnt2);
            }else if(res2.back() == b[j]){
                res2.push_back(b[j]);
                j++;
                cnt2++;
                maxcnt2 = max(cnt2, maxcnt2);
            }
            else{
                res2.push_back(b[j]);
                j++;
                cnt2 = 1;
            }
        }
    }
    while(i<n){
        if(res2.back() == a[i]){
            cnt2++;
            maxcnt2 = max(cnt2, maxcnt2);
        }
        else{
            cnt2 = 1;
        }
        res2.push_back(a[i]);
        i++;  
    }
    while(j<n){
        if(res2.back() == b[j]){
            cnt2++;
            maxcnt2 = max(cnt2, maxcnt2);
        }
        else{
            cnt2 = 1;
        }
        res2.push_back(b[j]);
        j++;
    }
    i = 0;
    j = 0;
    vi res3;
    int maxcnt3 = 1;
    int cnt3 = 1;
    while(i<n && j<n){
        if(res3.empty()){
            res3.push_back(b[j]);
            j++;
        }
        else{
            if(res3.back() == a[i]){
                res3.push_back(a[i]);
                i++;
                cnt3++;
                maxcnt3 = max(cnt3, maxcnt3);
            }else if(res3.back() == b[j]){
                res3.push_back(b[j]);
                j++;
                cnt3++;
                maxcnt3 = max(cnt3, maxcnt3);
            }
            else{
                res3.push_back(b[j]);
                j++;
                cnt3 = 1;
            }
        }
    }
    while(i<n){
        if(res3.back() == a[i]){
            cnt3++;
            maxcnt3 = max(cnt3, maxcnt3);
        }
        else{
            cnt3 = 1;
        }
        res3.push_back(a[i]);
        i++;  
    }
    while(j<n){
        if(res3.back() == b[j]){
            cnt3++;
            maxcnt3 = max(cnt3, maxcnt3);
        }
        else{
            cnt3 = 1;
        }
        res3.push_back(b[j]);
        j++;
    }

    cout<<max(maxcnt, max(maxcnt1, max(maxcnt2, maxcnt3)))<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int sumN = n*(n+1)/2;
        int p = (n-k)*(n-k+1)/2;

        int res = sumN-p;

        if(res%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
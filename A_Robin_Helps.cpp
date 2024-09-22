#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;

        cin>>n>>k;
        vector<int>a(n);

        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int cnt = 0;
        int ans = 0;

        for(auto it : a){
            if(it >= k){
                cnt += it;
            }
            else if(it == 0){
                if(cnt>0){ cnt--;
                ans++;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
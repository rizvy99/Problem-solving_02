#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>s(n);
        vector<ll>v(m + 1, 0);
        for(int i=0;i<n;i++){
            ll l;
            cin>>l;
            s[i].resize(l);
            for(int j=0;j<l;j++){
                cin>>s[i][j];
                v[s[i][j]]++;
            }
        }
        bool flag = false;
        for(int i=1;i<=m;i++){
            if(v[i]==0){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<el;
            continue;
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            bool flag1 = true;
            for(auto u : s[i]){
                if(v[u] == 1){
                    flag1 = false;
                    break;
                }
            }
            if(flag1){
                cnt++;
            }
        }
        if(cnt>=2){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
         
    }
    return 0;
}

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
    int t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll>v(m+1,0);
        for(ll i = 1;i<=m;i++){
            cin>>v[i];
        }
        ll ans=n-v[m]+1;
        for(ll i = 2;i<=m;i++){
            if(v[i]==1){ans = 1;}
        }
        cout<<ans<<el;
    }
    return 0;
}
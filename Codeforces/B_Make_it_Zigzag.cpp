#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    ll ans=0;
    ll mx = v[1];
    for(int i=2; i<=n;i++){
        mx = max(mx, v[i]);
        if(i%2==1){
            continue;
        }
        v[i] = mx;
        ll p = max(1LL*0, v[i-1]-v[i]+1);
        ans+=p;
        v[i-1]-=p;
        if(i+1<=n){
            p = max(1LL*0, v[i+1]-v[i]+1);
            ans+=p;
            mx = max(mx, v[i+1]);
            v[i+1]-=p;
        }
       
    }
    cout<<ans<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

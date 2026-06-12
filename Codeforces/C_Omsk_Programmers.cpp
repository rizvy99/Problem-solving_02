//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#include <bits/stdc++.h>
using namespace std;
void dfs(ll v,ll p,ll x,map<ll,ll>& mp){
    if(mp.count(v) && mp[v]<=p){
        return;
    }
    mp[v] = p;
    if(v == 0){
        return;
    }
    ll q=v/x;
    dfs(q,p+1,x,mp);
    ll rem=v%x;
    if(rem){
        dfs(q+1,p+(x-rem)+1,x,mp);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a,b,x;
        cin>>a>>b>>x;
        map<ll,ll>val,val1 ;
        dfs(a,0,x,val);
        dfs(b,0,x,val1);
        ll ans=(ll)4e18;
        for(auto &[v,val_a]:val){
            for(auto &[w,val_b]:val1){
                ans = min(ans,val_a+val_b+abs(v-w));
            }
        }
        cout<<ans<<el;
    }

    return 0;
}
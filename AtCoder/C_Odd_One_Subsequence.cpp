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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    const int mx = n+ 5;
    vector<ll>v1(mx, 0);
    for(auto a : v){
        v1[a]++;
    }
    ll ans = 1LL*n*(n-1)*(n-2)/6;
    for(int i=0;i<mx;i++){
        if(v1[i] >= 3){
            ans -= 1LL*v1[i]*(v1[i]-1)*(v1[i]-2)/6;
        }
    }
    ll val = 0;
    for(int i = 0;i<mx;i++){
        if(v1[i] == 0){
            continue;
        }
        ll lft = val;
        ll rgt = n-val-v1[i];
        ans -= lft * v1[i] * rgt;
        val += v1[i];
    }
    cout<<ans<<el;
    return 0;
}

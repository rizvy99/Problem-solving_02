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
    ll n,sum=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        //sum=0;
        sum+=v[i];   
    }
    sort(v.begin(),v.end());
    ll mid = v[n/2];
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(v[i] - mid);
    }
    cout<<ans<<el;   
    return 0;
}
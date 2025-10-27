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
    ll n;
    cin>>n;
    ll ans = 0;
    for(int i = 0;(1LL<<i)<=n;i++){
        ll shift = 1LL << (i + 1);
        ll div = n/shift;
        ll val = div*(shift / 2);
        ll mod = n % shift;
        ll mx = max(0LL,mod-(shift / 2) + 1);
        ans+=val+mx;
    }
    cout<<ans<<el;
    return 0;
}

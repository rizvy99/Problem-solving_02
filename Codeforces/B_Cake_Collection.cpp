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
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        int mn = min<ll>(n, m);
        ll ans = 0;
        for (int i = 0; i < mn; i++) {
            ans += v[i] * (m - i);
        }
        cout << ans <<el;

     
    }
    return 0;
}
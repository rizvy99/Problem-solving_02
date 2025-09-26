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
        int n,k;
        cin>>n>>k;
        vector<ll>v(n+1,0);
        for (int i = 0;i<n;i++){
            ll x;
            cin >> x;
            if ((x >= 0) && (x <= n)){
                v[x]++;
            }
        }
        ll cnt = 0;
        for (int i = 0; i < k; i++){
            if (v[i] == 0){
                cnt++;
            }
        }
        ll cnt_k = v[k];
        ll ans = max(cnt,cnt_k);
        cout << ans <<el;
    }
    return 0;
}
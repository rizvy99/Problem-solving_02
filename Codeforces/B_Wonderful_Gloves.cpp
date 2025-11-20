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
        vector<ll>l(n),r(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<ll>mn(n),mx(n);
        ll sum_mx = 0;
        for(int i=0;i<n;i++){
            mn[i] = min(l[i],r[i]);
            mx[i] = max(l[i],r[i]);
            sum_mx += mx[i];
        }
        sort(mn.begin(), mn.end(),greater<ll>());
        int val = max(0, k-1);
        ll sum = 0;
        for(int i=0;i<val && i<n;i++){
            sum += mn[i];
        }
        ll ans = sum_mx +sum+ 1;
        cout<<ans<<el;
    }

    return 0;
}

 
        
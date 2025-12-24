//Alrazi Hosen Rizvy
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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0;
        bool ok = false;
        cin >> n;
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>x>>y;
            v[i] = x + y;
            cnt += y;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (auto u : v) {
            if (sum + u <= cnt) {
                sum += u;
                ans++;
            } else {
                break;
            }
        }
        cout<<ans<<el;
    }

    return 0;
}

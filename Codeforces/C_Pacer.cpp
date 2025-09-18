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
        int n,m,a,b;
        cin>>n>>m;
        vector<pair<ll,ll>> v;
        v.push_back({0, 0});
        for (int i = 0; i < n; i++) {
            ll a;
            int b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        bool flag = true;
        ll f_point = v[0].first;
        int s_point = v[0].second;
        for (int i = 1; i < v.size(); i++) {
            ll f = v[i].first;
            int s = v[i].second;
            ll sub = f - f_point;
            int val = (s - s_point) & 1;

            if (sub < val) {
                flag = false;
                break;
            }
            if (sub % 2 == val){
                ans +=sub;
            }
            else{
                ans += sub - 1;
            }
            f_point = f;
            s_point = s;
        }
        if (!flag) {
            cout << -1 << el;
            continue;
        }
        ans += (m - f_point);
        cout << ans <<el;
    }
    return 0;
}

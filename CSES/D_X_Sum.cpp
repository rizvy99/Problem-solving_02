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
        int n,m;
        cin>>n>>m;
        vector<vector<ll>> a(n, vector<ll>(m));
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<ll> v1(n + m, 0);
        vector<ll> v2(n + m, 0); 
        int val = m - 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v1[i - j + val] += a[i][j];
                v2[i + j] += a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ll cur =
                    v1[i - j + val] +
                    v2[i + j] -
                    a[i][j]; 
                ans = max(ans, cur);
            }
        }
        cout<<ans<<el;
    }
    return 0;
}

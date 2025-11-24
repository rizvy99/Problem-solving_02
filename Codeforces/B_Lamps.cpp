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
        int n;
        cin >> n;
        vector<vector<ll>>g(n + 1);
        for(int i = 0;i<n;i++){
            ll ai, bi;
            cin>>ai>>bi;
            g[ai].push_back(bi);
        }
        ll ans = 0;
        for(int i = 1;i<=n;i++){
            auto &vec = g[i];
            if(vec.empty()){
                continue;
            }
            sort(vec.rbegin(), vec.rend());
            int take = min((int)vec.size(), i);
            for(int j = 0; j < take; j++)
                ans += vec[j];
        }
        cout<<ans<<el;
    }
    return 0;
}


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
        cin>>n;
        vector<ll> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int mx = 1;
            for(int j =i+1;j<n;j++){
                if(v[j]<=v[i]){mx++;}
            }
            cnt = max(cnt, mx);
        }
        int ans = n - cnt;
        cout<<ans<<el;
    }

    return 0;
}

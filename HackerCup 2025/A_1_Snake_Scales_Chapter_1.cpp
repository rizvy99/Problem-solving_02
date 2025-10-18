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
    for(int p=1;p<=t;p++) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        int ans = 0;
        for(int i = 0;i<n- 1;i++){
            ans = max(ans, abs(v[i+1] - v[i]));
        }
        cout<<"Case #"<<p<<": "<<ans<<el;
    }
    return 0;
}
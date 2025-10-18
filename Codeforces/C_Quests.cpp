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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum = 0, mx = 0;
        int ans = 0;
        for(int i = 0;i<min(n, k);i++){
            sum += a[i];
            mx = max(mx, b[i]);
            ans = max(ans,sum+mx*(k-i-1));
        }

        cout<<ans<<el;
    }

    return 0;
}

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
        vector<ll>a(n+1),b(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        } 
        vector<int>cnt_a(2*n + 1);
        vector<int>cnt_b(2*n + 1);
        int p = 1;
        for(int i = 2;i<=n;i++){
            if(a[i] != a[i-1]){
                cnt_a[a[i - 1]] = max(cnt_a[a[i - 1]], i - p);
                p = i;
            }
        }
        cnt_a[a[n]] = max(cnt_a[a[n]], n-p+1);
        p = 1;
        for(int i = 2;i<=n;i++){
            if(b[i] != b[i - 1]){
                cnt_b[b[i - 1]] = max(cnt_b[b[i - 1]], i - p);
                p = i;
            }
        }
        cnt_b[b[n]] = max(cnt_b[b[n]], n - p + 1);

        int ans = 0;
        for(int i = 1;i<=2*n;i++){
            ans = max(ans,cnt_a[i] + cnt_b[i]);
        }

        cout<<ans<<el;
    }
}
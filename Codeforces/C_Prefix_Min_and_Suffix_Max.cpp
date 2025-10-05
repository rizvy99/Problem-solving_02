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
        vector<ll>v(n+1), pre(n+1, INT_MAX), suf(n+2);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        for(int i=1;i<=n;i++){
            pre[i] = min(v[i],pre[i-1]);
        }
        for(int i=n;i>=1;i--){
            suf[i]=max(v[i],suf[i+1]);
        }

        for(int i=1;i<=n;i++){
            if(v[i]==pre[i] || v[i]==suf[i]){
                cout<<1;
            }else{
                cout<<0;
            }
        }cout<<el;
        
    }
    return 0;
}
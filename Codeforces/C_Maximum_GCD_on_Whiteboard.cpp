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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>v1(n+1),v2(n+1);
        for(auto u : v){
            v1[u]++;
        }
        for(int i = 1;i<=n;i++){
            v2[i] = v2[i-1]+v1[i];
        }
        int ans = 1;
        for(int i = n;i>=1;i--){ 
            int mn = min(n,4*i-1); 
            int s1=v2[mn];
            int s2=0;
            if(i<=n){
                s2+=v1[i];
            }
            if(2*i<=n){
                s2+=v1[2*i];
            }
            if(3*i<=n){
                s2+=v1[3*i];
            }
            int val = s1-s2;
            if(val<=k){
                ans=i;
                break;
            } 
        }
        cout<<ans<<el;
    }
    return 0;
}
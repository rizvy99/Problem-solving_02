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
        vector<ll>v1(k);
        for(int i=0;i<k;i++){
            cin>>v1[i];
        }
        sort(v.rbegin(),v.rend());
        sort(v1.begin(),v1.end());
        vector<ll>val(n+1,0);
        for(int i=0;i<n;i++){
            val[i+1]=val[i]+v[i];
        }
        ll ans=0;
        int cal=0;
        for(auto u:v1){
            if(cal+u>n){break;}
            ll sum = val[cal+u]-val[cal];
            ll low = v[cal+u-1];
            ans+= sum-low;
            cal+=u;
        }
        ans+=val[n]-val[cal];
        cout<<ans<<el;
        

    }
    return 0;
}
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
        vector<ll>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){
                //cout<<0<<el;
                cnt++;
            }
        }
        if(cnt==n){
            cout<<0<<el;
            continue;
        }else{
            ll val=0,sum=0,diff=0,mx=0;
            for(int i=0;i<n;i++){
                val = max(val,v[i]);
                diff= val-v[i];
                sum+=diff;
                mx = max(mx,diff);
                
            }
            cout<<sum+mx<<el;
        }
     
    }
    return 0;
}
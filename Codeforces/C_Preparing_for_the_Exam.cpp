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
        int n,m,k;
        cin >> n>>m>>k;
        vector<ll>v(n);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        map<ll,ll>mp;
        for(int i=0;i<k;i++){
            ll x;
            cin>>x;
            mp[x]++;
        }
        if(n==k){
            for(int i=0;i<m;i++){
                cout<<1;
            }cout<<el;
        }
        else if(k==n-1){
            for(int i=0;i<m;i++){
                if(mp[v[i]]){
                    cout<<0;
                }else{
                    cout<<1;
                }
            }cout<<el;
        }else{
            for(int i=0;i<m;i++){
                cout<<0;
            }cout<<el;
        }
        
    }
    return 0;
}
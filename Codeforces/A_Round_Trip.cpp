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
        ll r,x,d,n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        ll l=r,R=r;
        int ans=0;
        for(auto u:s){
            if(u=='1'){
                ans++;
                ll n_l=max(0LL,l-d);
                ll n_r=R+d;
                l =n_l;
                R = n_r;
            }else{
                if(l<x){
                    ans++;
                    ll n_l=max(0LL,l-d);
                    ll n_r=R+d;
                    l =n_l;
                    R = n_r;

                }
            }
        }
        cout<<ans<<el;
    }

    return 0;
}

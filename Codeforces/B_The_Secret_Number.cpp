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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        ll ten = 10;
        //ll num = 1+10;
        while(1+ten<=n){
            ll num = 1+ten;
            if(n%num==0){
                v.push_back(n/num);
            }
            ten*=10;
            //ll val = 10000000000000000000LL;
            //if(ten>10000000000000000000LL){break;}
        }
        sort(v.begin(),v.end());
        if(v.empty()){cout<<0<<el;}
        else{
            cout<<v.size()<<el;
            for(auto ans : v){
                cout<<ans<<" ";
            }cout<<el;
        }
         
         
     
    }
    return 0;
}
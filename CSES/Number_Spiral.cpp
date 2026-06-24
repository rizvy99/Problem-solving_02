//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>y>>x;
        ll n = max(y, x);
        ll ans;
        if(n%2==0){
            if(y==n){
                ans=n*n-x+1;
            }else{
                ans=(n-1)*(n-1)+y;
            }
        }else{
            if(x==n){
                ans=n*n-y+1;
            }else{
                ans=(n-1)*(n-1)+x;
            }
        }
        cout<<ans<<el;
    }

    return 0;
}

    
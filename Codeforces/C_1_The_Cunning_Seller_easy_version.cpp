#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
ll cal(ll x){
    ll val = pow(3,x+1)+x*pow(3,x-1);
    return val;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        /*int cal = (log(n)/log(3));
        int div = (n/3);
        ll ans = n*3 + cal*div ;
        cout<<ans<<el;*/
        ll ans =0;
        while(n>0){
           ll cal1 = log(n)/log(3);
            if(pow(3,cal1+1)==n){
                cal1=cal1+1;
            }
            ans = ans + cal(cal1);
            cal1 = pow(3,cal1);
            n = n-cal1;
        }
        cout<<ans<<el;
    }
    return 0;
}
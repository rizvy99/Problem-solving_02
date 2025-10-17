#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
 
void solve() {
    ll a, b;
    cin>>a>>b;
    if(a == b){
        cout<<0<<el;
        return;
    }
    ll c = a^b;
    if(c <= a){
        cout<<1<<el;
        cout<<c<<el;
        return;
    }
    ll val = 1;
    while(val <= a){
        val <<= 1;
    }
    if(b >= val){
        cout<<-1<<el;
        return;
    }
    ll x1 = (val-1)^ a;
    ll x2 = (val - 1) ^ b;
    cout<<2<<el;
    cout<<x1<<" "<<x2<<el;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

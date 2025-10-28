#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
ll Gcd(ll a, ll b){
    while(b != 0){
        ll temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
ll gc_ary(const vector<ll>& a) {
    ll g = a[0];
    for(ll u:a){
        g = Gcd(g,u);
    }
    return g;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        if(find(v.begin(),v.end(),1)!= v.end()){
            cout<<2<<el;
            continue;
        }
        ll g = gc_ary(v);
        ll ans = 2;
        while(Gcd(ans, g) != 1){
            ans++;
        }
        if(ans <= 1e18){
            cout<<ans<<el;
        }
        else{
            cout<<-1<<el;
        }
    }

    return 0;
}

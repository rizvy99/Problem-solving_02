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
    ll x; int n;
    cin>>x>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<ll>s;
    multiset<ll> gp;
    s.insert(0);
    s.insert(x);
    gp.insert(x - 0);
    for(auto u:v){
        auto it=s.lower_bound(u);
        ll r=*it;
        ll l=*prev(it);
        gp.erase(gp.find(r-l));
        gp.insert(u-l);
        gp.insert(r-u);
        s.insert(u);
        cout<<*gp.rbegin()<<" ";
    }

    return 0;
}

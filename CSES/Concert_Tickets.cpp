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
    ll n,m;
    cin>>n>>m;
    multiset<ll>ticket;
    for(ll i=0;i<n;i++){
        ll prz;
        cin>>prz;
        ticket.insert(prz);
    }
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        auto it = ticket.upper_bound(x);
        if(it==ticket.begin()){
            cout<<-1<<el;
        }
        else{
            it--;
            cout<<*it<<el;
            ticket.erase(it);
        }
    }
    return 0;
}
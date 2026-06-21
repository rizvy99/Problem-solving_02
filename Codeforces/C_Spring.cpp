//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
ll LCM(ll a,ll b){
    return a/__gcd(a,b)*b;
}
ll on(ll a,ll m){
    return m/a;
}
ll tw(ll a,ll b,ll m){
    return m/LCM(a,b);
}
ll tre(ll a,ll b,ll c,ll m){
    return m/LCM(LCM(a,b),c);
}
ll fn(ll a,ll b,ll c,ll m){
    ll c1=on(a,m);
    ll c2=tw(a,b,m)+tw(a,c,m);
    ll c3=tre(a,b,c,m);

    return (c1-c2+c3)*6
         +(c2-2*c3)*3
         +c3*2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        cout<<fn(a,b,c,m)<<" "<<fn(b,a,c,m)<<" "<<fn(c,a,b,m)<<el;
    }

    return 0;
}
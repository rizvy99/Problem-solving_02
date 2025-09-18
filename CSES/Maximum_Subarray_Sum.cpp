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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){cin>>v[i];}
    //int sum = 0;
    ll mx = v[0],current =v[0];
    for(int i=1;i<n;i++){
        current = max(v[i],current+v[i]);
        mx = max(mx,current);
    }
    cout<<mx<<el;
    return 0;
}
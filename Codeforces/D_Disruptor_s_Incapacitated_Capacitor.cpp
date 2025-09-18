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
    const double pi = acos(-1.0);
    while(t--){
        ll r,l,the;
        cin>>r>>l>>the;
        double ang = the*pi/180.0;
        double h = 2*r*sin(ang/2.0);
        double d = sqrt(l*l - h*h);
        cout<<fixed<<setprecision(6)<<d<<el;
    }
    return 0;
}
//Alrazi Hosen Rizvy
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
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll ans = (n/3)*min(3*a,b) + min((n%3)*a,b);
cout << ans << el;
    }
    return 0;
}
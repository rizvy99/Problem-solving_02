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
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll m=n/i;
        ans+= i*(m*(m+1)/2);

    }
    cout<<ans<<el;

    return 0;
}
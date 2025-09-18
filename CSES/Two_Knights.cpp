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
    for(ll i=1;i<=n;i++){
        __int128 ii = i;
        __int128 f_point = (ii * ii * (ii * ii - 1)) / 2;
        __int128 s_point = 4 * (ii - 1) * (ii - 2);
        __int128 result = f_point - s_point;
        cout << (ll)result << el;
    }
    return 0;
}
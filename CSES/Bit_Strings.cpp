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
    const ll MOD = 1000000007;
    ll n;
    cin >> n;
    ll result = 1;
    for (ll i = 0; i < n;i++) {
        result = (result * 2) % MOD;
    }

    cout << result <<el;
     
    return 0;
}
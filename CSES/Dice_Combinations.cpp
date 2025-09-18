#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
const ll MOD = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for(int sum = 1; sum <= n; sum++){
        for(int i = 1; i <= 6; i++){
            if(sum >= i){
                dp[sum] = (dp[sum] + dp[sum - i]) % MOD;
            }
        }
    }
    
    cout << dp[n] << el;
}
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
ll solve(int n, const string& s, char ch){
    vector<ll>v;  
    for (int i = 0; i < n;i++){
        if (s[i] == ch){
            v.push_back(i);
        }
    }
    int k = v.size();  
    if (k == 0 || k == n){
        return 0;  
    }
    vector<ll> v1;
    for (int i = 0; i < k;i++){
        v1.push_back((ll)v[i] - i);
    }
    ll div = v1[(k - 1) / 2];
    ll mx = max(0LL, min((ll)n - k, div));
    ll sum = 0;
    for (auto val : v1){
        sum += abs(val - mx);
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll swaps_a = solve(n, s, 'a');
        ll swaps_b = solve(n, s, 'b');
        cout << min(swaps_a, swaps_b) << el;
    }
    return 0;
}
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
    vector<ll> pos(n+1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i-1]) {
            rounds++;
        }
    }
    cout<<rounds<<el;
    return 0;
}
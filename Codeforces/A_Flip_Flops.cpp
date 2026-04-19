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
        int n;
        ll c,k;
        cin >> n >> c >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++) {
            if (v[i] > c) break;

            ll mn = min(k, c - v[i]);
            k -= mn;
            c += v[i] + mn;
        }

        cout << c << el;
    }

    return 0;
}
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
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<ll> v(k + 1, 0);
        for (int i = 0; i < n; i++) {
            if (a[i] <= k) {
                if (v[a[i]] == 0) {
                    v[a[i]] = 1;
                } else if (v[a[i]] == 2) {
                    v[a[i]] = 3;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            if (b[i] <= k) {
                if (v[b[i]] == 0) {
                    v[b[i]] = 2;
                } else if (v[b[i]] == 1) {
                    v[b[i]] = 3;
                }
            }
        }
        vector<ll> v1(4, 0);
        for (int i = 0; i <= k; i++) {
            int val = v[i];
            v1[val] = v1[val] + 1;
        }
        if (v1[1] > k / 2 || v1[2] > k / 2 || v1[1] + v1[2] + v1[3] != k) {
            cout << "NO" << el;
        } else {
            cout << "YES" << el;
        }
    }

    return 0;
}

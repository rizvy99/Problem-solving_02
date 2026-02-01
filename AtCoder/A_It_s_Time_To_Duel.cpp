//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (accumulate(a.begin(), a.end(), 0) == n) {
        cout<<"YES"<<el;
        return;
    }

    for (int i = 0; i < n - 1; i++) if (!a[i] && !a[i + 1]) {
        cout<<"YES"<<el;
        return;
    }

    cout<<"NO"<<el;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
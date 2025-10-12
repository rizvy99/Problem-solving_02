#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long x, n, m;
        cin >> x >> n >> m;

        // Compute minimum
        long long x_min;
        if(x == 0) x_min = 0;
        else {
            long long temp = x >> min(n, 63LL); // floor division
            x_min = (temp + ((1LL << min(m, 63LL)) - 1)) >> min(m, 63LL); // ceil division
        }

        // Compute maximum
        long long x_max;
        if(x == 0) x_max = 0;
        else {
            long long temp = (x + ((1LL << min(m, 63LL)) - 1)) >> min(m, 63LL); // ceil first
            x_max = temp >> min(n, 63LL); // floor next
        }

        cout << x_min << " " << x_max << "\n";
    }
}

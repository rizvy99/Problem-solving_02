#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) cin >> a[i];

        vector<vector<int>> pos(n);
        for (int i = 0; i < 2 * n; i++) {
            pos[a[i]].push_back(i);
        }

        int l = 2 * n, r = -1;
        int ans = 0;

        for (int k = 0; k < n; k++) {
            l = min(l, pos[k][0]);
            r = max(r, pos[k][1]);

            // check palindrome
            bool ok = true;
            int i = l, j = r;
            while (i < j) {
                if (a[i] != a[j]) {
                    ok = false;
                    break;
                }
                i++, j--;
            }

            if (!ok) break;
            ans = k + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}
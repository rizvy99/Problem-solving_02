#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0,j=0;
    for (int i = 0; i < n; i++) {
        while (j < n && v[i] * 2 > v[j]) {
            j++;
        }
        cnt += (n - j);
    }

    cout << cnt << endl;
    return 0;
}

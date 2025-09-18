#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
bool good(int x) {
    return (x % 3 != 0) && (x % 10 != 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int cnt = 0, num = 0;
        while (cnt < k) {
            num++;
            if (good(num)) cnt++;
        }
        cout << num << "\n";
    }

    return 0;
}
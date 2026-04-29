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
        cin >> n;
        vector<int> cnt(10, 0);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
            if (!ans) {
                if (cnt[0] >= 3 &&cnt[1] >= 1 &&cnt[2] >= 2 &&cnt[3] >= 1 &&cnt[5] >= 1) {
                    ans = i;
                }
            }
        }
        cout << ans <<el;
    }

    return 0;
}

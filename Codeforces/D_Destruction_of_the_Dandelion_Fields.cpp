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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> even,odd;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                even.push_back(v[i]);
            } else {
                odd.push_back(v[i]);
            }
        }
        ll ans = 0;
        if (!odd.empty()) {
           ll sumEven = 0;
            for (int i = 0; i <even.size(); i++) {
                sumEven += even[i];
            }
            ans += sumEven;
        }        
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());

        int m = odd.size();
        for (int i = 0; i < (m + 1) / 2; i++) {
            ans += odd[i];
        }

        cout << ans <<el;
    }
    return 0;
}
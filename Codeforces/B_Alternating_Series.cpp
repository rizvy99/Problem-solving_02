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
        cin>>n;
        if (n == 1) {
            cout << 0 <<el;
            continue;
        }

        vector<int> ans;
        for (int i = 0; i < n / 2; i++) {
            ans.push_back(-1);
            ans.push_back(3);
        }
        if (n % 2) {
            ans.push_back(-1);
        } else {
            ans.push_back(2);
        }

       for (int i = 0; i < n; i++) {
            cout << ans[i];
            if (i + 1 == n) {
                cout <<el;    
            } else {
                cout << ' ';     
            }
        }

    }
    return 0;
}

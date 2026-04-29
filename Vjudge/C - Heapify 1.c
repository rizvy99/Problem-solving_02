//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int getRoot(int x) {
    while (x % 2 == 0) x /= 2;
    return x;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        bool ok = true;

        for(int i = 1; i <= n; i++) {
            if (getRoot(i) != getRoot(a[i])) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

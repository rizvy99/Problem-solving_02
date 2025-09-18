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
        int k,x;
        cin>>k>>x;
        for (int i = 0; i < k; i++) {
            if (x % 2 == 0) {
                x *= 2;
            } else {
                if ((x - 1) % 3 == 0 && ((x - 1) / 3) % 2 == 1) {
                    x = (x - 1) / 3;
                } else {
                    x *= 2;
                }
            }
        }
        cout << x <<el;
    }
    return 0;
}
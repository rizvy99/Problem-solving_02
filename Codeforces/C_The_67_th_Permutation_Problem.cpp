//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>v(3 * n);
        int l=1,m=n+1,h=n+2;
        for (int i = 0; i < n; ++i) {
            v[3*i]=l++;
            v[3 * i + 1] = m;
            v[3 * i + 2] = h;
            m += 2;
            h += 2;
        }
        for (int i = 0; i < 3 * n; ++i) {
            cout<<v[i]<<(i==3*n-1?" ":" ");
        }
        cout<<el;
    }
    return 0;
}
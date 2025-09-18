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
        vector<ll>v(n),p(n+1);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            p[v[i]] = i;
        }
        int l = p[n], r = p[n];
        bool flag = true;
        for (int x = n - 1; x >= 1; --x) {
            if (p[x] == l - 1){
                l = p[x];
            }
            else if(p[x] == r + 1){
                r = p[x];
            }
            else{
                flag = false;
                break; 
            }
        }
        if(flag){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}
 
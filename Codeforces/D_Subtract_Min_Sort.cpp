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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ok = true;
        for(int i=0;i+1<n;i++){
            int mn = min(v[i],v[i+1]);
            v[i]-=mn;
            v[i+1]-=mn;
        }
        for(int i=0;i+1<n;i++){
            if(v[i]>v[i+1]){
                ok = false;
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<el;

    }
    return 0;
}

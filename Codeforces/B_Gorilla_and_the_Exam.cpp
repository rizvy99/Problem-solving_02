#include <bits/stdc++.h>
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
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        map<ll,int>mp;
        for(auto u:v){
            mp[u]++;
        }
        vector<int> v1;
        for(auto &p:mp){
            v1.push_back(p.second);
        }
        sort(v1.begin(),v1.end());
        int cnt = v1.size();
        bool ok = false;
        for(int i = 0;i<cnt-1;i++){
            if(v1[i]>k){
                cout<<cnt-i<<el;
                ok = true;
                break;
            }
            k-= v1[i];
        }
        if(!ok){
            cout<<1<<el;
        }
    }

    return 0;
}

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
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v){
            cin>>x;
        }
        sort (all(v));
        int ans=0;
        for(int i=0; i<n; i++){
            int mx=0,nxt=v[i];
            for(int j=i; j<n; j++){
                if(v[j]==nxt){
                    mx++;
                    nxt++;
                }
            }
            ans=max(ans,mx);
        }
        cout<<ans<<el;
    }
    return 0;
}
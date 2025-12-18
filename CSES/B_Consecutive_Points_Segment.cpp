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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt2=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ok = false;
        ll l = -1e18, r = 1e18;
        for(int i = 0; i < n; i++){
            ll left  = v[i] - 1 - i;
            ll right = v[i] + 1 - i;
            l = max(l, left);
            r = min(r, right);
        }
        if(l<=r){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}
 
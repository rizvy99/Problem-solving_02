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
        int n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll w_pnt = v[k-1];  
        ll h = v[k-1];
        sort(v.begin(),v.end());
        bool ok = true;
        for(int i = 0;i<n;i++){
            if(v[i] < w_pnt){continue;}
            if(v[i]-w_pnt > h){
                ok = false;
                break;  
            }
            w_pnt = v[i];
        }
        if(ok){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
         
    }
    return 0;
}

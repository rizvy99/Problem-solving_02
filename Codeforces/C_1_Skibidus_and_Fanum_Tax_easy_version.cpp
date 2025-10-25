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
        int n,m;
        cin>>n>>m;
        vector<ll>v(n),v1(m);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<m;i++){
            cin>>v1[i];
        }
        //set<int>s;
        if(n==1){
            cout<<"YES"<<el;
        }else{
            ll prev = LLONG_MIN;  
            bool ok = true;
            for(int i = 0;i<n;i++){
                ll x1 = v[i];   
                ll x2 =v1[0]-v[i];  
                ll mn = min(x1,x2);
                ll mx = max(x1,x2);
                if(mn>=prev){
                    prev=mn;
                }else if(mx>=prev){
                    prev=mx;
                }else{
                    ok=false;
                    break;
                }
            }
            if(!ok){
                cout<<"NO"<<el;
            }else{
                cout<<"YES"<<el;
            }
        }
     
    }
    return 0;
}
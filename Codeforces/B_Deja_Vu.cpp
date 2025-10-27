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
        int n,q;
        cin>>n>>q;
        vector<ll>a(n),x(q);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>x[i];
        }
        int mn_x=31;
        for(int i=0;i<q;i++){
            if(x[i]<mn_x){
                ll val = 1LL<<(x[i]-1);
                ll val1= 1LL<<x[i];
                for(int j=0;j<n;j++){
                    if(a[j]%val1==0){
                        a[j]+=val;
                    }
                }
                mn_x=x[i];
            }
        }
        for(auto u:a){
            cout<<u<<" ";
        }cout<<el;

    }
    return 0;
}

 

         
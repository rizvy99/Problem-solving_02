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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            //sum+=v[i];
        }
        vector<bool>bl(n+1,false);
        for(auto u:v){
            if(u<=n){
                bl[u]=true;
            }
        }
        int mex = 0;
        while(mex<=n && bl[mex]){
            mex++;
        }
        v.push_back(mex);
        int cal = k%(n+1);
        vector<ll>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[(i+cal)%(n+1)]=v[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }cout<<el;
     
    }
    return 0;
}

 

       
   

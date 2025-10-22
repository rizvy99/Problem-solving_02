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
        ll n;
        cin>>n;
        vector<ll>v(n),v1(n+1);
        ll sum=1,val=1e18;
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        for(int i =0;i<n+1;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            sum+=abs(v[i]-v1[i]);
            val = min(val, abs(v[i]-v1[n]));
            val = min(val, abs(v1[i]-v1[n]));
            if(min(v[i],v1[i])<=v1[n]  && max(v[i],v1[i])>=v1[n]){
                val =0;
            }
        }
        cout<<sum+val<<el;
    }
    return 0;
}


  
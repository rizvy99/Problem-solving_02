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
     int n;
     cin>>n;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     sort (v.begin(),v.end());
     ll sum =1;
     for( auto u : v){
        if(sum>=u){
            sum+=u;
        }
        if(sum<u){
            break;
        }
     }
     cout<<sum<<el;
    
    return 0;
}
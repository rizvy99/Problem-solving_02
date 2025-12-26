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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0,cnt0=0;
        bool ok = false;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>vc;
        for(int i=0;i<n;i++){
            if(v[i]<=k){
                vc.push_back(v[i]);
            }
        }
        sort(vc.rbegin(),vc.rend());
        ll time = 1;
        for(int i=0;i<vc.size();i++){
            if(1LL*vc[i]*time<=k){
                cnt++;
                time*=2;
            }
        }
        cout<<n-cnt<<el;
    }
    return 0;
}

 
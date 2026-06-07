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
        ll n;
        cin>>n;
        int cnt=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>v1;
        for(ll i=n-2;i>=0;i--){
            if(v[i+1]>0){
                v1.push_back(i);
                v[i]+=v[i+1];
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0){
                cnt++;
            }
        }
        cout<<cnt<<el;

    }
    return 0;
}
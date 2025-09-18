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
    ll n,x;
    cin>>n>>x;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    ll l = 0,r= n-1;
    while(l<r){
        ll sum = (v[l].first + v[r].first);
        if(sum == x){
            cout<<v[l].second<<" "<<v[r].second<<el;
            return 0;
        }
        if(sum<x){l++;}
        else{r--;}
    }
    cout<<"IMPOSSIBLE"<<el;
    return 0;
}
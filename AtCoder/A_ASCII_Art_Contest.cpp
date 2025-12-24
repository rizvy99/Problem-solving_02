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
    
    ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0;
    bool ok = false;
    vector<ll>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
        sum+=v[i];

    }
    sortall(v);
    int sub = v[2] - v[0];
    if(sub>=10){
        cout<<"check again"<<el;
    }else{
        cout<<"final "<<v[1]<<el;
    }
    
    return 0;
}
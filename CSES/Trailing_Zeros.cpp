//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    // ll val=1;
    // for(int i=1;i<=n;i++){
    //     val*=i;
    // }
    // //cout<<val<<el;
    // string s = to_string(val);
       ll cnt_0=0;
    // ll x = s.size();
    // for(int i=x-1;i>=0;i--){
    //     if(s[i]=='0'){
    //         cnt_0++;
    //     }else{
    //         break;
    //     }
    // }

    while(n>0){
        n/=5;
        cnt_0+=n;
    }
    cout<<cnt_0<<el;
    return 0;
}
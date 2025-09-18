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
        ll l,r,L,R;
        cin>>l>>r>>L>>R;
        ll mx_L=max(l,L);
        ll mn_R=min(r,R);
        if(mx_L>mn_R){
            cout<<1<<el;
        }else{
            ll LL,RR;
            ll x= mn_R - mx_L;
            LL = (min(l,L)<mx_L)?1:0;
            RR = (max(r,R)>mn_R)?1:0;
            cout<<x+LL+RR<<el;
        }
    }
    return 0;
}
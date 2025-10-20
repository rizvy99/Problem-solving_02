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
        int x,y,k;
        cin>>x>>y>>k;
        int x_val,y_val;
        if(x%k==0){x_val=x/k;}
        if(x%k!=0){x_val=(x/k)+1;}
        if(y%k==0){y_val=y/k;}
        if(y%k!=0){y_val=(y/k)+1;}
        int ans = max(2*x_val-1,2*y_val);
        cout<<ans<<el;
     
    }
    return 0;
}
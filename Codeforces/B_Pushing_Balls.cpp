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
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<string>str(n);
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        bool ok=true;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(str[i][j]=='1'){
                    bool left =false,top =false;
                    for(ll k=0;k<i;k++){
                        if(str[i][k]=='0'){
                            left =true;
                            break;
                        }
                    }
                    for(ll k=0;k<j;k++){
                        if(str[k][j]=='0'){
                            top =true;
                            break;
                        }
                    }
                    if(left && top){
                        ok = false;
                        break;
                    }
                }
            }
            if(!ok){
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<el;
     
    }
    return 0;
}
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
        ll n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        for(int i = 0;i<n;i++){
            if(s[i]=='L'){
                x-=1;
            }else{
                x+=1;
            }
            k-=1;
            if(x==0){
                break;
            }
        }
        ll ans = 0;
        if(x==0){
            ans=1;
            for(int i = 0;i<n;i++){
                if(s[i]=='L'){
                    x-=1;
                }else{
                    x+=1;
                }
                if(x==0){
                    ans+=(k/(i+1));
                    break;
                }
            }
        }
        cout<<ans<<el;
    }

    return 0;
}

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
        string s;
        cin>>s;
        int cnt=1,n=s.size();
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i-1]){
                cnt++;
            }
        }
        bool ok = false;
        for(int i = 0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                ok = true;
                break;
            }
        }
        int ans=0;
        if(ok){
            ans=cnt-1;
        }else{
            ans=cnt;
        }
        cout<<ans<<el;
    }
    return 0;
}
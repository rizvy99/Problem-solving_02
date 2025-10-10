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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>big(26,0),sml(26,0);
        for(auto &u :s){
            if('A'<=u && u<='Z'){
                big[u-'A']++;
            }else{
                sml[u-'a']++;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ll pr_mn = min(sml[i],big[i]);
            ans+=pr_mn;
            sml[i]-=pr_mn;
            big[i]-=pr_mn;
            int mx_pir =max(sml[i],big[i])/2;
            ll add = min(k, mx_pir);
            ans+=add;
            k-=add;
        }
        cout<<ans<<el;
     
    }
    return 0;
}

 
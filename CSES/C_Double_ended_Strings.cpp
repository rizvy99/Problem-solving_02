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
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        int l=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    l=max(l,dp[i][j]);
                }else{
                    dp[i][j]=0;
                }
            }
        }
        int ans = n+m-2*l;
        cout<<ans<<el;
     
    }
    return 0;
}
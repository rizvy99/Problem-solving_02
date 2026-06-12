//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
bool slv(int a,int b){
    if(a==b){
        return false;
    }
    if(a+b==7){
        return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        const int INF = 1e9;
        vector<vector<int>> dp(n, vector<int>(7, INF));
        for(int i=1;i<=6;i++){
            dp[0][i]=(a[0]!=i);
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=6;j++){
                int val=(a[i]!=j);
                for(int k=1;k<=6;k++){
                    if(slv(k,j)){
                        dp[i][j] = min(dp[i][j],dp[i-1][k]+val);
                    }
                }
            }
        }
        int ans=INF;
        for(int i=1;i<=6;i++){
            ans = min(ans, dp[n-1][i]);
        }
        cout<<ans<<el;
    }
    return 0;
}
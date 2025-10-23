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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v1(26,0),v2(26,0);
        for(auto u:s){
            v1[u-'a']++;
        }
        int ans=0;
        for(auto u:s){
            v1[u-'a']--;
            v2[u-'a']++;
            int val = 0;
            for(int i=0;i<26;i++){
                val+=(v1[i]>0)+(v2[i]>0);
            }
            ans = max(ans,val);
        }
        cout<<ans<<el;
        
    }
    return 0;
}
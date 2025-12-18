//Alrazi Hosen Rizvy
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
        string a,b;
        //cin>>a>>b;
        string s;
        cin>>s;
        vector<ll>v;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                v.push_back(i);
            }
        }
        int ans=1;
        int last=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]-last>k){
                ans++;
                last=v[i-1];
            }
        }
        if(last != v.back()){
            ans++;
        }
        cout<<ans<<el;
        
         
    }
    return 0;
}
 
      
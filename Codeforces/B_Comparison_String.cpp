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
        int ans=1,val=1;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){val=1;}
            else{val++;}
            ans = max(ans,val);
        }
        
        cout<<ans+1<<el;
     
    }
    return 0;
}
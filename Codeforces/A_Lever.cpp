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
        int n;cin>>n;
        vector<int>v(n);
        vector<int>v1(n);
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            int sub = v[i]-v1[i];
            int mx = max(0,sub);
            ans+= mx;
        }
        cout<<ans+1<<el;
     
    }
    return 0;
}
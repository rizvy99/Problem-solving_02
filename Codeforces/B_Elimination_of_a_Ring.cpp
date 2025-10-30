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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        set<ll>s;
        for(auto u:v){
            s.insert(u);
        }
        if(n==1){
            cout<<1<<el;
            continue;
        }else{
             if(s.size()!=2){
                cout<<n<<el;
             }else{
                int ans=((n-2)/2)+2;
                cout<<ans<<el;
             }
        }
        
    }
    return 0;
}
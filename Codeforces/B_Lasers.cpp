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
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<ll>v(n);
        vector<ll>v1(m);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<m;i++){
            cin>>v1[i];
        }

        cout<<m+n<<el;
     
    }
    return 0;
}
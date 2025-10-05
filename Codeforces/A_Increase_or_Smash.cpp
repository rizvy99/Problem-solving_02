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
        set<ll>s;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        int sz =s.size();
        cout<<(2*sz-1)<<el;
       
    }
    return 0;
}

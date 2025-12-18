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
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    multiset<ll>s;
    for(auto u:v){
        auto it=s.upper_bound(u);
        if(it!=s.end()){
            s.erase(it);
        }
        s.insert(u);
    }
    cout<<s.size()<<el;
}

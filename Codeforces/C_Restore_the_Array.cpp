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
        vector<ll>v(n-1);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        vector<ll>v1;
        v1.push_back(v[0]);
        for(int i = 1;i<n-1;i++){
            v1.push_back(min(v[i-1],v[i]));
        }
        v1.push_back(v[n-2]);
        for(auto u:v1){
            cout<<u<<" ";
        }cout<<el;

    }
    return 0;
}
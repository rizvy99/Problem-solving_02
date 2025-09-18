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
        ll ar[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        vector<ll>v;  
        for(int i = 0; i < n; i++) { 
            for(int j = 0; j < n; j++) {
                v.push_back(ar[i][j]); 
            }
        }
        vector<int> unique;
        unordered_set<int> seen; 
        for (auto u : v) {
            if (seen.find(u) == seen.end()) {
                unique.push_back(u);  
                seen.insert(u);        
            }
        }
        int sum = 0,all_sum=0;
        for(int i=1;i<=n*2;i++){
            all_sum+=i;
        }
        for(auto x:unique){
            sum+=x;   
        }
        cout<<all_sum - sum<<" ";
        for(auto x: unique){
            cout<<x<<" ";
        }cout<<el;
    }
    return 0;
}
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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        vector<int >sx,nn,tw,tre;
        for(auto u:v){
            if (u % 6 == 0) {
                sx.push_back(u);
            } else if (u % 2 == 0) {
                tw.push_back(u);
            } else if (u % 3 == 0) {
                tre.push_back(u);
            } else {
                nn.push_back(u);
            }
        }
        vector<int> ans;
        for(auto u : tw){
            ans.push_back(u);
        }
        for(auto u : nn){
            ans.push_back(u);
        }
        for(auto u : tre){
            ans.push_back(u);
        }
        for(auto u : sx){
            ans.push_back(u);
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<(i==n-1 ? "" : " ");
        }
        cout<<el;
    
    }
    return 0;
}
 
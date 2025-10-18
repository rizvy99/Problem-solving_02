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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0;i<=n-k;i++){
        string sr = s.substr(i,k);
        mp[sr]++;
    }
    int mx=0;
    for(auto &u :mp){
        mx = max(mx,u.second);
    }
    vector<string>ans;
    for(auto &u : mp){
        if(u.second == mx){
            ans.push_back(u.first);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<mx<<el;
    for(size_t i=0;i<ans.size();i++){
        if(i)cout<<" ";
        cout<<ans[i];
    }cout<<el;

    return 0;
}

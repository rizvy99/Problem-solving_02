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
    map<int,int>mp;
    int l = 0, ans = 0;
    for(int i= 0;i<n;i++){
        mp[v[i]]++;
        while(mp[v[i]]>1){
            mp[v[l]]--;
            l++;
        }
        ans = max(ans,i-l+1);
    }

    cout<<ans<<el;
}

//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
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
        unordered_map<ll,vector<ll>>mp;
        for(int i=0;i<n;i++){
            ll x= v[i];
            int stp = 0;
            while(true){
                mp[x].push_back(stp);
                if(x == 0){break;}
                x/=2;
                stp++;
            }
        }
        int ans = INT_MAX;
        for(auto &it : mp){
            if(it.second.size() == n){
                sort(it.second.begin(),it.second.end());
                int sum = 0;
                for(int i=0;i<n;i++){
                    sum+=it.second[i];
                }
                ans=min(ans,sum);
            }
        }
        cout<<ans<<el;
    }

    return 0;
}
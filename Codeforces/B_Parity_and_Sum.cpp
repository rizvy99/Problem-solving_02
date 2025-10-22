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
        int cnt_evn=0,cnt_od=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>v1;
        ll od_vl=-1;
        for(auto u:v){
            if(u%2==0){
                v1.push_back(u);
            }else{
                od_vl=max(od_vl,(ll)u);
            }
        }
        sort(v1.begin(),v1.end());
        if(od_vl==-1 || v1.empty()){
            cout<<0<<el;
            continue;
        }
        int ans=v1.size();
        for(auto u1:v1){
            if(u1<od_vl){
                od_vl+=u1;
            }else{
                ans++;
                break;
            }
        }
        cout<<ans<<el;
    }
    return 0;
}
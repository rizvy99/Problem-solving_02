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
        ll a,b;
        cin>>a>>b;
        ll xk,yk;
        cin>>xk>>yk;
        ll xq,yq;
        cin>>xq>>yq;
        vector<pair<ll,ll>>vc={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
        set<pair<ll,ll>>st;
        for(auto[dx,dy]:vc){
            st.insert({xk+dx,yk+dy});
        }
        int ans=0;
        set<pair<ll,ll>>stp;
        for(auto[dx,dy]:vc){
            pair<ll,ll>p={xq+dx,yq+dy};
            if(stp.count(p)){
                continue;
            }
            stp.insert(p);
            if(st.count(p)){ans++;}
        }
        cout<<ans<<el;
    }

    return 0;
}
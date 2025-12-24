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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0;
        bool ok = false;
        cin >> n;
        string s;
        cin >> s;
        string sr = s;
        sort(sr.begin(), sr.end());
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (s[i] != sr[i])
                v.push_back(i + 1);
        }
        if(v.empty()){
            cout<<0<<el;
        }else{
            cout<<1<<el;
            cout<<v.size()<<" ";
            for(auto u : v){
                cout<<u<<" ";
            }
            cout<<el;
        }
    }
    return 0;
}

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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0,cnt0=0;
        bool ok = false;
        cin>>a>>b>>x>>y;
        int mx = max(a, b);
        int mn = min(a, b);
        bool fh = (mx <= 2 * (mn + 1));
        int ra = x - a;
        int kb = y - b;
        int mx_se = max(ra, kb);
        int mn_Se = min(ra, kb);
        bool sh = (mx_se <= 2 * (mn_Se + 1));

        if(fh && sh){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}
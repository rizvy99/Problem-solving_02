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
        int n,k;
        cin>>n>>k;
        string s;
        cin >> s;
        int tp = 0,btm = 0,un = 0;
        for(auto c : s){
            if(c == '0'){tp++;}
            else if(c == '1'){btm++;}
            else{un++;}
        }
        int mn = tp;
        int mx = tp + un;
        int nk = n - k;  
        string ans =" ";
        for(int i = 1;i<=n;i++){
            int lo=max(mn,i-nk);
            int hi = min(mx,i-1);
            bool flag =(lo <= hi);
            bool flag1 = (mx >= i) || (mn < i - nk);
            if(flag && flag1){ans+= '?';}
            else if(flag){ans+= '+';}
            else{ans+= '-';}
        }
        cout<<ans<<el;
    }
    return 0;
}

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
        ll n,x;
        cin>>n;
        if(n >= 10 && n <= 18){
            cout<<"YES"<<el;
            continue;
        }
        string s = to_string(n);
        int sz = s.size();
        bool ok = true;
        if(s[0] != '1'){
            ok = false;
        }
        for(int i = 1;i<sz-1;i++){
            if(s[i]<'1' || s[i]>'9'){
                ok = false;
            }
        }
        if(s[sz-1]<'0' || s[sz-1]>'8'){
            ok = false;
        }
        if(!ok){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
        }
    }

    return 0;
}

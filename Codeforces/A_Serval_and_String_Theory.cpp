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
        cin>>s;
        string rev = s;
        reverse(rev.begin(), rev.end());

        if (k == 0) {
            if(s < rev){
                cout<<"YES"<<el;
            }else{cout<<"NO"<<el;}
        } else {
            bool all_same = true;
            for (int i = 1; i < n; ++i) {
                if (s[i] != s[0]) { all_same = false; break; }
            }
            if(all_same){
                cout<<"NO"<<el;
            }
            else{
                cout<<"YES"<<el;
            }
        }
    }
    return 0;
}
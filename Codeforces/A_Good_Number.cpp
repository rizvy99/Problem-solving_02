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
    int cnt = 0;
    while(n--){
        string s;
        cin>>s;
        vector<bool>v(10, false);
        for(auto c : s){
            v[c - '0'] = true;
        }
        bool ok = true;
        for(int i=0;i<=k;i++){
            if(!v[i]){
                ok = false;
                break;
            }
        }
        if(ok){cnt++;}
    }
    cout<<cnt<<el;
    return 0;
}

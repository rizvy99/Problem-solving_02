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
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        int cnt = a,mx_cnt = a,pos_cnt = 0;
        for(auto c : s){
            if(c =='+'){
                cnt++;
                pos_cnt++;
            }else{
                cnt = max(0,cnt-1);
            }
            mx_cnt = max(mx_cnt,cnt);
        }
        if(mx_cnt == n){
            cout<<"YES"<<el;
        }
        else if(a+pos_cnt>=n){
            cout<<"MAYBE"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }

    return 0;
}

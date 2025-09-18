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
    int t,cnt=0,cnt1=0;
    cin>>t;
    while(t--){
            int A,B,C;
            cin>>A>>B>>C;
            int cnt = (A == 0) + (B == 0) + (C == 0);
            int cnt1 = (A == 1) + (B == 1) + (C == 1);
            if(cnt>0 && cnt1>0){
                cout<<1<<el;
            }else{
                cout<<0<<el;
            }


    }
    return 0;
}

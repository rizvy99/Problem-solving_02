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
        int n,rk,ck,rd,cd;
        cin>>n>>rk>>ck>>rd>>cd;
        int l=0,h=n;
        while(l<h){
            int mid = l+(h-l)/2;
            int rl = max(0,rk-mid);
            int rh = min(n,rk+mid);
            int a_max = max(abs(rh-rd),abs(rl-rd));
            int cl = max(0,ck-mid);
            int ch = min(n,ck+mid);
            int c_max = max(abs(ch-cd),abs(cl-cd));
            int mx = max(a_max,c_max);
            if(mx<=mid){
                h = mid;
            }
            else{
                l= mid+1;
            }
        }
        cout<<l<<el;
    }
    return 0;
}
        
    
     
    
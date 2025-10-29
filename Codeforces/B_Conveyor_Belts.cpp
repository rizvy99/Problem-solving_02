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
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        int mn1 =min(n-x1,n-y1);
        int mn_1=min(x1-1,y1-1);
        int layr1 = min(mn1,mn_1);
        int mn2 =min(n-x2,n-y2);
        int mn_2=min(x2-1,y2-1);
        int layr2 = min(mn2,mn_2);
        if(layr1==layr2){
            cout<<0<<el;
        }else{
            int ans = abs(layr1-layr2);
            cout<<ans<<el;
        }
     
    }
    return 0;
}
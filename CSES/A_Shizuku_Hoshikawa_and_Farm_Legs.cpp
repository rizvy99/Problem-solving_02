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
        cin>>n;
        if(n%2!=0){
            cout<<0<<el;
        }else{
            x = n-2;
            if(x>=4){
                if(x%4!=0){
                    cout<<x/4+2<<el;
                }else{
                    cout<<x/4+1<<el;
                }
            }else{
                cout<<n/2<<el;
            }
        }
    }
    return 0;
}
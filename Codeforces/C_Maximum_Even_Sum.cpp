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
        ll a,b;
        cin>>a>>b;
        if(b%2==1){
            if(a%2==1){
                cout<<a*b+1<<el;
                continue;
            }else{
                cout<<-1<<el;
                continue;
            }
        }
        ll b1 = b, cnt =0;
        while((b1%2==1)==0){
            b1>>=1;
            cnt++;
        }
        if((a%2==1) && cnt==1){
            cout<<-1<<el;
            continue;
        }
        ll val=0;
        if(a%2==1){
            val=2;
        }else{
            val=1;
        }
        ll cal1 = a*val+b/val;
        ll cal2 = a*(b/2)+2;
        cout<<max(cal1,cal2)<<el;
     
    }
    return 0;
}
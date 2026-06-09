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
        ll n,x,y,z;
        cin>>n>>x>>y>>z;
        ll noai = (n+(x+y)-1)/(x+y);
        ll ai=0;
        if(n<=x*z){
            ai=(n+x-1)/x;
        }else{
            ll cal = n-x*z;
            ll cal1 = x+10*y;
            ai = z + (cal+cal1-1)/cal1;
        }
        cout<<min(noai,ai)<<el;
    }

    return 0;
}
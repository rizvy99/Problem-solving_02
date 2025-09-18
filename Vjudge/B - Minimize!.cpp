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
            int a,b,val=0,rslt=0;
            cin>>a>>b;
            for(int i=a;i<=b;i++){
                rslt =(i−a)+(b−i);
                val =rslt;
                if(val>rslt){
                rslt=val;
            }
            cout<<val<<el;

            }


    }
    return 0;
}

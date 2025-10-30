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
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"YES"<<el;
            //continue;
        }
        else{
            int diff = n-(a+b);
            if(diff>=2){
                cout<<"YES"<<el;
            }else{
                cout<<"NO"<<el;
            }
        }
     
    }
    return 0;
}
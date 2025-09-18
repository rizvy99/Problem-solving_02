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
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<el;
        }else if((a!=0 && b%a==0) || (b!=0 && a%b==0)){
            cout<<1<<el;
        }else{
            cout<<2<<el;
        }
     
    }
    return 0;
}
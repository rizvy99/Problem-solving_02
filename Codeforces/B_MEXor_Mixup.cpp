#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int xor_till(int n){
    if(n%4==0)return n;
    if(n%4==1)return 1;
    if(n%4==2)return n+1;
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        //vector<ll>x;
        int x= xor_till(a-1);
        if(x==b){
            cout<<a<<el;
        }else if((x^=b)!=a){
            cout<<a+1<<el;
        }else{
            cout<<a+2<<el;
        }
     
    }
    return 0;
}
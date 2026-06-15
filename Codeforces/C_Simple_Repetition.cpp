//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
bool isPrime(ll x) {
    if(x<2){
        return false;
    }
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(k==1){
            cout<<(isPrime(x)?"YES":"NO")<<el;
        }
        else{
            if(x==1 && k==2){
                cout<<"YES"<<el;
            }else{
                cout<<"NO"<<el;
            }
        }

    }
    return 0;
}
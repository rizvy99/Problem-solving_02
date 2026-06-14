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
        ll a,b,k;
        cin>>a>>b>>k;
        ll g = __gcd(a,b);
        if(a/g<=k && b/g<=k){
            cout<<1<<el;
        }else{
            cout<<2<<el;

        }
    }
    return 0;
}
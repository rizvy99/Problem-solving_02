//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
ll fact(int n) {
    ll fact_n = 1;
    for(int i=1;i<=n;i++){
        fact_n *= i;
    }
    return fact_n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b;
    cin>>a>>b;
    //cout<<facta(a)<<" "<<factb(b)<<el;
    int mn = min(a,b);
    //ll ans = __gcd(facta(a),factb(b));
    cout<<fact(mn)<<el;
    return 0;
}
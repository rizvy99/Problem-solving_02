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
    int S,A,B,X;
    cin>>S>>A>>B>>X;
    int sum = A + B;         
    int div = X / sum; 
    int mod = X % sum;   
    int ans = div * (S * A);
    ans += S * min(mod, A);
    cout<<ans<<el;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve(){
    ll n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(i%3==0 ||i%5==0){
            sum+=i;
        }
    }
    cout<<sum<<el;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    solve();
}
return 0;
}


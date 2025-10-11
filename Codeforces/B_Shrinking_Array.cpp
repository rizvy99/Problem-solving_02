#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<el;
            return ;
        }
    }

    for(int i=0;i<n-2;i++){
        if((v[i]<v[i+1]) && (v[i+1]>v[i+2])){
            cout<<1<<el;
            return ;
        }
         if((v[i]>v[i+1]) && (v[i+1]<v[i+2])){
            cout<<1<<el;
            return ;
        }
    }
    cout<<-1<<el;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve(){
    string a,b;
    cin>>a>>b;
    int n_a=a.size();
    int n_b=b.size();
    if(n_a>=2 && n_b>=2){
        for(int i=0;i<n_a-1;i++){
            for(int j=0;j<n_b-1;j++){
                if(a[i]==b[j] && a[i+1]==b[j+1]){
                    cout<<"YES"<<el;
                    cout<<"*"<<b[j]<<b[j+1]<<"*"<<el;
                    return;
                }
            }
        }
    }
    if(a[0]==b[0]){
        cout<<"YES"<<el;
        cout<<b[0]<<"*"<<el;
    }else if(a[n_a-1]==b[n_b-1]){
        cout<<"YES"<<el;
        cout<<"*"<<b[n_b-1]<<el;
    }else{
        cout<<"NO"<<el;
    }
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
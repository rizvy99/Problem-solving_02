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
        int n,s;
        cin>>n>>s;
        vector<ll>v(n),v1(3);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v1[v[i]]++;
        }
        if(s==(v1[1]+2*v1[2]) || s>=(v1[1]+2*v1[2]+2)){
            cout<<-1<<el;
        }else{
            for(int i=0;i<v1[0];i++){
                cout<<0<<" ";
            }
            for(int i=0;i<v1[2];i++){
                cout<<2<<" ";
            }
            for(int i=0;i<v1[1];i++){
                cout<<1<<" ";
            }
            cout<<el;
        }
     
    }
    return 0;
}
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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int k1=0,k2=0;
        if(v[0]==v[n-1]){
            for(int i=0;i<n;i++){
                if(v[0]==v[i]){
                    k1++;
                }else{
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(v[0]==v[i]){
                    k2++;
                }else{
                    break;
                }
            }
            int k= k1+k2;
            if(k>=n){
                cout<<0<<el;
            }else{
                cout<<n-k<<el;
            }
        }else{
            for(int i=0;i<n;i++){
                if(v[0]==v[i]){
                    k1++;
                }else{break;}
            }
            for(int i=n-1;i>=0;i--){
                if(v[n-1]==v[i]){
                    k2++;
                }else{break;}
            }
            cout<<n- max(k1,k2)<<el;
        }
     
    }
    return 0;
}
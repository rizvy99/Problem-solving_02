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
        bool ok =true ;
        for(int i=0;i<n-2;i++){
            if(v[i]<0){
                ok=false;
                break;
            }else{
                ll v_1 = v[i];
                v[i]-=v_1;
                v[i+1]-=v_1*2;
                v[i+2]-=v_1;
            }
        }
        if(!ok || v[n-1] !=0 || v[n-2] != 0){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
        }
     
    }
    return 0;
}




 

        

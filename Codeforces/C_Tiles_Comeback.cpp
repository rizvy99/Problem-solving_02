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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k==1){
            cout<<"YES"<<el;
        }
        
        else if(v[0]==v[n-1]){
            int cnt = 0;
            for(int i=1;i<n-1;i++){
                if(v[0]==v[i]){cnt++;}
            }
            if((k-2)<=cnt){
                cout<<"YES"<<el;
            }else{
                cout<<"NO"<<el;
            }
        }
        else{
            int l_cnt=1,l_pos=0;
            for(int i=1;i<n;i++){
                if(v[0]==v[i]){
                    l_cnt++;
                    if(l_cnt==k){
                        l_pos = i;
                        break;
                    }
                }
            }
            int r_cnt=1,r_pos=0;
            for(int i=n-2;i>=0;i--){
                if(v[n-1]==v[i]){
                    r_cnt++;
                    if(r_cnt==k){
                        r_pos=i;
                        break;
                    }
                }
            }
            if(l_cnt==k && r_cnt==k && l_pos<r_pos){
                cout<<"YES"<<el;
            }else{
                cout<<"NO"<<el;
            }
        }
        
     
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        bool evn_ok = false;
        bool od_ok = false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                evn_ok=true;
            }else{
                od_ok=true;
            }
        }
        if(evn_ok && od_ok){
            sort(v.begin(),v.end());
        }
        for(int i=0;i<n;i++){
            cout<<v[i];
            if(i<n-1){
                cout<<" ";
            }
        }
        cout<<el;
    }

    return 0;
}
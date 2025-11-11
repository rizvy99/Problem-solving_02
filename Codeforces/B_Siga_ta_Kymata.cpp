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
        vector<ll>v(n+1);
        int mn=1,mx=1;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(v[i]<v[mn]){
                mn=i;
            }
            if(v[i]>v[mx]){
                mx=i;
            }
        }
        string s;
        cin>>s;
        s=" "+s;
        if(s[1]=='1' || s[n]=='1'){
            cout<<-1<<el;
            continue;
        }
        if(s[mn]=='1' || s[mx]=='1'){
            cout<<-1<<el;
            continue;
        }
        cout<<5<<el;
        cout<<1<<" "<<mn<<el;
        cout<<1<<" "<<mx<<el;
        cout<<mn<<" "<<n<<el;
        cout<<mx<<" "<<n<<el;
        cout<<min(mn,mx)<<" "<<max(mn,mx)<<el; 

     
    }
    return 0;
}




  
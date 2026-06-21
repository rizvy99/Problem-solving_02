//Alrazi Hosen Rizvy
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
        vector<int>v(n);
        ll ans = 0,gre = -1;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i] > 1){
                ans+=v[i];
                gre=i;
            }
        }
        if(gre == -1){
            cout<<1<<el;
            continue;
        }
        bool ok = false;
        for(int i = gre+1;i<n;i++){
            if(v[i] == 1){
                ok = true;
                break;
            }
        }
        if(ok){ans++;}
        cout<<ans%676767677<<el;
    }
    return 0;
}
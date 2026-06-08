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
        vector<int> a(n);
        int ans=0, mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=mx){
                ans++;
            }
            mx = max(mx,a[i]);
        }
        cout<<ans<<el;
         
    }
    return 0;
}
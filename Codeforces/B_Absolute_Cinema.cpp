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
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll sum = 0;
        for(int i=0;i<n;i++){
            sum += max(a[i],b[i]);
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans=max(ans,sum+min(a[i],b[i]));
        }
        cout<<ans<<el;
         
    }
    return 0;
}
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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cur = 1,mx = 1;
        for(int i = 1;i<n;i++){
            if(v[i]-v[i-1]<=k){
                cur++;
            }else{
                cur = 1;
            }
            mx = max(mx, cur);
        }
        cout<<n-mx<<el;
    }
    return 0;
}
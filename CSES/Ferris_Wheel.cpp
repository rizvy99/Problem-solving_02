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
     
        int n,x, ans=0;
        cin>>n>>x;
        vector<double>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
             
        }
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        while(i<=j){
            if((v[i]+v[j])<=x){
                i++;j--;ans++;
            }
            else{
                j--;
                ans++;
            }
        }
        cout<<ans<<el;

     
    return 0;
}
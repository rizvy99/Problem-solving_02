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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll mx =*max_element(v.begin(),v.end());
        ll mn = *min_element(v.begin(),v.end());
        ll sum = 0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        v[n-1]--;
        sort(v.begin(),v.end());
        
        if(v[n-1]-v[0]>k || sum%2==0){
            cout<<"Jerry"<<el;
            continue;
        }else{
            cout<<"Tom"<<el;
        }
    }
    return 0;
}
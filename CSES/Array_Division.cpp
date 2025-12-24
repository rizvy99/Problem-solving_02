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
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll mx=0, sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx = max(mx,a[i]);
        sum += a[i];
    }
    ll l=mx, r=sum, ans=r;
    while(l<=r){
        ll mid = (l+r)/2;
        int cnt=1;
        ll s=0;
        for(ll v:a){
            if(s+v > mid){
                cnt++;
                s=v;
            } else {
                s+=v;
            }
        }
        if(cnt<=k){
            ans=mid;
            r=mid-1;
        } else {
            l=mid+1;
        }
    }
    cout<<ans<<el;

    return 0;
}

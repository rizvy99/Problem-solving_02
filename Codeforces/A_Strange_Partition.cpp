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
        vector<ll>v(n);
        ll sum=0,sum1=0,x=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%k==0){
                sum1+=v[i]/k;
            }else{
                sum1+=v[i]/k+1;
            }
        }
        if(sum%k==0){
            x+=sum/k;
        }else{
            x+=sum/k+1;
        }
        cout<<x<<" "<<sum1<<el;
    }
    return 0;
}
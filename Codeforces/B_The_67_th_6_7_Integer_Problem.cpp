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
        int ar[7],sum=0,mx=-100;
        for(int i = 0;i<7;i++){
            cin>>ar[i];
            sum += ar[i];
            if(ar[i]>mx){
                mx = ar[i];
            }
        }
        int ans=2*mx-sum;
        cout<<ans<<el;
    }
    return 0;
}
//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin >> n;
        ll pref = 0;
        ll mn = LLONG_MAX;
        vector<ll>v(n);
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            pref +=x;
            mn = min(mn,pref/i);
            cout<<mn;
            if(i<n){
                cout<<" ";
            }
        }
        cout<<el;
    }

    return 0;
}
 
 
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
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        ll x;
        cin>>x;
        ll k = 0;
        ll val = x;
        if(val == 0){
            k = 1;
        }
        while(val > 0){
            k++;
            val /= 10;
        }
        
        ll y=1;
        for(ll i=0;i<k;i++){
            y *= 10;
        }
        y += 1;
        cout<<y<<el;
         
    }

    return 0;
}
 
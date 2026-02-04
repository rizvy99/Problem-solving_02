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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt = (n / 15) * 3;
        ll rem = n % 15;
        for (int i = 0; i <= rem; i++) {
            if (i % 3 == i % 5) {
                cnt++;
            }
        }
        cout<<cnt<<el;
    }
    return 0;
}
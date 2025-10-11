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
    int n;
    cin>>n;
    vector<ll>v;
    v.push_back(1);  
    for(int i = 1;i<=n;i++){
        ll sum = 0;
        for(int j=0;j<i;j++){
            ll x = v[j];
            while(x>0){
                sum += x % 10;
                x /= 10;
            }
        }
        v.push_back(sum);
    }
    cout<<v[n]<<el;
    return 0;
}

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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> v;
    string sr = " ";
    for (auto c : s) {
        if (c == ',') {
            v.push_back(stoll(sr));
            sr = " ";
        } else {
            sr += c;
        }
    }
    v.push_back(stoll(sr));
    ll mx = v.back();  
    bool ok = true;
    for (auto x : v) {
        if (mx % x != 0) {
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"FRIENDS"<<el;
    }else{
        cout<<"NOT FRIENDS"<<el;
    }
    return 0;
}

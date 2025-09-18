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
        int n;
        cin >> n;
        vector<ll> v(n);
        int cnt = 0;
        vector<ll>v1;
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            int cnt1 = cnt + (!v1.empty() && v1.back()>v[i]);
            if(cnt1 == 0 || (cnt1 ==1 && v[i]<=v1[0])){
                v1.push_back(v[i]);
                cnt = cnt1;
                cout<<'1';
            }else{
                cout<<'0';
            }
            
        }
        cout <<el;
     
    }
    return 0;
}
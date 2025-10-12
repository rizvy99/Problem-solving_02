#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<ll>b(n+1,0);
    for(int i = 1;i<= n;i++){
        cin>>b[i];
    }
    vector<int>p(n+1,0);
    for(int i=1;i<=n;i++){
        p[i] = static_cast<int>(b[i - 1] + i - b[i]);
    }
    vector<int> a(n + 1, 0);
    vector<int> v;
    for(int i =1;i<=n;i++){
        if(p[i]==0){
            v.push_back(i);
        }
    }
    int val = n;
    for(auto u : v) {
        a[u] = val--;
    }
    function<int(int)> ar = [&](int i){
        if(a[i] != 0){
            return a[i];
        }
        a[i] = ar(p[i]);
        return a[i];
    };
    for(int i = 1;i<=n;i++){
        ar(i);
    }
    for(int i = 1;i<=n;i++){
        cout<<a[i];
        if(i != n){
            cout << " ";
        }
    }
    cout <<el;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
         solve();
    }
    return 0;
}

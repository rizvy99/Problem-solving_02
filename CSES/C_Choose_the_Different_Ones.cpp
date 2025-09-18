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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>vn(n),vm(m);
        for(int i=0;i<n;i++){
            cin>>vn[i];
        }
        for(int i=0;i<m;i++){
            cin>>vm[i];
        }
        int k2 = k * k;
    set<int> sa(vn.begin(), vn.end());
    set<int> sb(vm.begin(), vm.end());

    int only_a = 0, only_b = 0, both = 0;

    set<int> all_values;
    for(int x : sa) {
        if(sb.count(x)) {
            both++;
        } else {
            only_a++;
        }
        all_values.insert(x);
    }
    for(int x : sb) {
        if(!sa.count(x)) {
            only_b++;
            all_values.insert(x);
        }
    }

    if(only_a > k2 || only_b > k2 || all_values.size() < k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

    return 0;
}
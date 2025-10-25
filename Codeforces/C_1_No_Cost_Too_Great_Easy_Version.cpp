#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
const int mx = 200000 + 10;
vector<int> v;
void solve(int n){
    v.resize(n+1);
    iota(v.begin(), v.end(), 0);
    for(int i=2;i*i<=n;i++){
        if(v[i] == i){
            for(int j=i*i;j<=n;j+=i){
                if(v[j] == j){
                    v[j] = i;
                }
            }
        }
    }
}
set<int> get_primes(int x){
    set<int> s;
    while(x > 1){
        int p = v[x];
        s.insert(p);
        x /= p;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve(mx);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        set<int> s;
        bool ok = false;
        for(int i=0;i<n;i++){
            set<int> ps = get_primes(a[i]);
            for(auto u : ps){
                if(s.find(u) != s.end()){
                    ok = true;
                    break;
                }
            }
            if (ok) break;
            s.insert(ps.begin(), ps.end());
        }
        if(ok){
            cout<<"0"<<el;
            continue;
        }
        bool oke = false;
        for(int i=0;i<n;i++){
            int x = a[i] + 1;
            set<int> s1 = get_primes(x);
            for(auto u : s1){
                if(s.find(u) != s.end()){
                    oke = true;
                    break;
                }
            }
            if(oke){break;}
        }
        if(oke){
            cout<<"1"<<el;
            continue;
        }
        cout<<"2"<<el;
    }
    return 0;
}
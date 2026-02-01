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
        ll n,k,x,y,m,cnt=0,sum=0,cnt1=0,cnt0=0;
        bool ok = false;
        cin>>n>>k;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<ll, ll>>pe;
        for(int i = 0; i < n; i++) {
            pe.push_back({b[i], a[i]});
        }
        sort(pe.begin(), pe.end());
        ll cost = k;
        ll infrm = 1;

        for(int i = 0; i < n && infrm < n; i++){
            ll bi = pe[i].first;
            ll ai = pe[i].second;

            if(bi >= k) break;

            ll need = n - infrm;
            ll take = min(ai, need);

            cost += take * bi;
            infrm += take;
        }
        if(infrm < n) {
            cost += (n - infrm) * k;
        }

        cout<<cost<<el;
    }

    return 0;
}

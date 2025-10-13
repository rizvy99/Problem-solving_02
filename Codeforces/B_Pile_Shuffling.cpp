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
        ll ans = 0;
        for(int i = 0;i<n;i++){
            ll a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b>d){
                ans +=(a+b-d);
            }else{
                ans += max(0LL,a-c);
            }
        }

        cout << ans <<el;
    }

    return 0;
}

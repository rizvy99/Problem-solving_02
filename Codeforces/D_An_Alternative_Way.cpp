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
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n+1), b(n+1);
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        for(int i = 1; i <= n; i++){
            cin>>b[i];
        }

        ll prev = 0;
        ll cnt_pos = 0, cnt_ne = 0;
        bool ok = true;
        for(int i = 1; i <= n; i++){
            int val=0;
            if(i%2==0){
                val=1;
            }else{val=-1;}
            ll cal = (ll)val * (b[i] - a[i]);
            ll d = cal - prev;
            prev = cal;

            if(!ok){
                continue;
            }  
            if(i % 2 == 0){
                if(d >= 0){
                    cnt_pos += d;
                }else{
                    if(cnt_pos < -d){
                        ok = false;
                    }
                    else{cnt_pos += d;}
                }
            }else{
                if(d <= 0){
                    cnt_ne += -d;
                }else{
                    if(cnt_ne < d){ok = false;}
                    else{cnt_ne -= d;}
                }
            }
        }
        if(ok){yes}
        else no

         
    }
    return 0;
}
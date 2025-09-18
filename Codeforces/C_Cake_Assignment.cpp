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
         ll k,x;
         cin>>k>>x;
         ll total = 1LL<<(k+1);
         ll ini = 1LL<<k;
         if(ini==x){
            cout<<0<<el<<el;
            continue;
         }
         vector<ll>v;
         ll current = x;
         while(current!=ini){
            if(current *2<=total){
                v.push_back(1);
                current*=2;
            }else{
                v.push_back(2);
                current=2*current-total;
            }
         }
         reverse(v.begin(),v.end());
         cout<<v.size()<<el;
         if(!v.empty()){   
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
         }cout<<el;
    }

    return 0;
}
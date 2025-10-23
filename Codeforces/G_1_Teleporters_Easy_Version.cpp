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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>cst(n);
        for(int i=0;i<n;i++){
            cst[i]=v[i]+(i+1);
        }
        sort(cst.begin(),cst.end());
        ll cnt=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=cst[i];
            if(sum<=c){cnt++;}
            else{break;}
        }
        cout << cnt << el;
    }

    return 0;
}

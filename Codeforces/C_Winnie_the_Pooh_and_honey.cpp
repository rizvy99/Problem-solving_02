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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    priority_queue<pair<ll,int>> qu;
    for(int i=0;i<n;i++){
        qu.push({v[i], 0});
    }
    ll ans = 0;
    while(!qu.empty()){
        auto cur = qu.top(); qu.pop();
        int fst = cur.first;
        int snd = cur.second;
        if(fst<k || snd==3){
            ans+=fst;
        }else{
            fst-=k;
            snd+=1;
            qu.push({fst,snd});
        }
    }
    cout<<ans<<el;
    return 0;
}

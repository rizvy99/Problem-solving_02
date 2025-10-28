#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
#define MAX_N 200000;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        set<ll>seen;
        int alt =1;
        for(int i=0;i<n;i++){
            if(seen.count(a[i])){
                while(seen.count(alt) || alt==a[i]){
                    alt=(alt%n)+1;  
                }
                b[i] = alt;
                seen.insert(alt);
            }else{
                b[i]=a[i];
                seen.insert(a[i]);
            }
        }
        for(auto u:b){
            cout<<u<<" ";
        }cout<<el;
    }
    return 0 ;
}
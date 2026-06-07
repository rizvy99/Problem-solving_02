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
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<ll>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int od_cnt = 0,ev_cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                if(i % 2 == 0) {
                    od_cnt++;
                } else {
                    ev_cnt++;
                }
            }
        }
        if(od_cnt>ev_cnt){
            cout<<"Ajisai"<<el;
        }else if(ev_cnt>od_cnt){
            cout<<"Mai"<<el;
        }else{
            cout<<"Tie"<<el;
        }

    }
    return 0;
}
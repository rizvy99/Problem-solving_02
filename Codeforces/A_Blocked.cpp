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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                cnt++;
                break;
            }
        }
        if(cnt>0){
            cout<<-1<<el;
        }else{
            for(auto u:v){
                cout<<u<<" ";
            }cout<<el;
        }
    }
    return 0;
}
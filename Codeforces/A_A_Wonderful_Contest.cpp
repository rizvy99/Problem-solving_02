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
        int cnt=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==100){
                cnt++;
            }
        }
        if(cnt>0){
            cout<<"Yes"<<el;
        } else {
            cout<<"No"<<el; 
        }
    }
    return 0;
}
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
        map<int,int>mp;
        int x;
        bool ok=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>x;
                mp[x]++;
                if(mp[x]>(n*(n-1))){ok=false;}
            }
        }
        if(ok){cout<<"YES"<<el;}
        else{cout<<"NO"<<el;}
    }
    return 0;
}
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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt2=0;
        cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                if(v[i][j]<0){
                    cnt++;
                }
                if(v[i][j]==0){
                    cnt2++;
                }
                sum+=abs(v[i][j]);
            }
        }
        int mn= INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mn=min(mn,abs(v[i][j]));
            }
        }
        if(cnt2>0 || cnt%2==0){
            cout<<sum<<el;
        }
        else{
            cout<<sum-2*mn<<el;
        }
    }
    return 0;
}
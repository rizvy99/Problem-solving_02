#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m)); 
        vector<ll>mn_crd(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(),v[i].end());
            mn_crd[i]=v[i][0];
            for(int j=1;j<m;j++){
                if(v[i][j]-v[i][j-1]!=n){
                    mn_crd[i]=-1;
                }
            }
        }
        bool ok=true;
        for(int i=0;i<n;i++){
            if(mn_crd[i]==-1){
                ok=false;
            }
        }
        if(!ok){
            cout<<-1<<el;
            continue;
        }
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;i++){
            int inx = mn_crd[i]%n;
            v2[inx]=i+1;
        }
        for(int i=0;i<n;i++){
            cout<<v2[i]<<" ";
        }cout<<el;
    }
    return 0;
}

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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans =0;
        vector<int>v1;
        //v1.push_back(v[0]);
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                v[i+1]=v[i];
            }else{
                continue;
            }
        }
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        cout<<ans<<el; 
        
    }
    return 0;
}
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
        cin >> n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        int pos = find(v.begin(),v.end(),n)-v.begin();
        if(pos != 0){
            reverse(v.begin(),v.begin()+pos+1);
        }else{
            int pos1 = find(v.begin(), v.end(),n-1)-v.begin();
            reverse(v.begin()+1,v.begin()+pos1+1);
        }
        for(auto u : v){
            cout<<u<<" ";
        }
        cout<<el;
    }
}
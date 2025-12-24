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
        ll n,k,x,y,m,cnt=0,sum=0,cnt1=0;
        bool ok = false;
        cin>>n;
        string a,b,c;
        cin>> a;
        //cin>>a>>b;
        cin>>m;
        vector<char>s,sr;
        cin>>b>>c;
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                s.push_back(b[i]);
            }else{
                sr.push_back(b[i]);
            }
        }
        reverse(s.begin(),s.end());
        for(auto u:s){
            cout<<u;
        }
        cout<<a;
        for(auto u:sr){
            cout<<u;
        }
        cout<<el;
    }
    return 0;
}
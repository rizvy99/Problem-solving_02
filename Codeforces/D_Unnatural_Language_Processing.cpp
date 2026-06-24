//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
bool V(char c){
    return c=='a'||c=='e';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<string>sy;
        ll i=n-1;
        while(i>=0){
            if(!V(s[i])){
                sy.push_back(s.substr(i-2,3));
                i-=3;
            }else{
                sy.push_back(s.substr(i-1,2));
                i-=2;
            }
        }
        reverse(sy.begin(),sy.end());
        for(ll j=0;j<sy.size();j++){
            if(j){
                cout<<'.';
            }
            cout<<sy[j];
        }cout<<el;
    }
    return 0;
}
        

      
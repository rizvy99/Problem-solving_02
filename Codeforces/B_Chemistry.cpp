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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> v(26,0);
        for(auto c: s){
            if(isalpha(c)){
                v[c - 'a']++;
            }
        }
        int odd = 0;
        for(auto f: v){
            if(f % 2!=0){odd++;}
        }
        if(odd <= k + 1){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
         
    }
    return 0;
}
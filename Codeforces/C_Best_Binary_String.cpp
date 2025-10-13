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
        string s;
        cin>>s;
        char ch ='0';
        for(auto &c : s){
            if(c=='?'){
                c=ch;
            }else{ch=c;}
        }
        cout<<s<<el;
        
    }
    return 0;
}
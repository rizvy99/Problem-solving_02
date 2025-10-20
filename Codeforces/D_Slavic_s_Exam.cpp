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
        string s,sr;
        cin>>s>>sr;
        int sn=s.size(),srn=sr.size(),i=0,j=0;
        while(i<sn && j<srn){
            if(s[i]=='?'){
                s[i]=sr[j];
                i++,j++;
            }else if(s[i]==sr[j]){
                i++,j++;
            }else{
                i++;
            }
        }
        if(j<srn){
            cout<<"NO"<<el;
            continue;
        } 
        for(auto &c:s){
            if(c=='?'){c='a';}
        }
        cout<<"YES"<<el<<s<<el;
         
    }
    return 0;
}
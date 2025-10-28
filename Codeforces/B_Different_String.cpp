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
        //set<char>s1;
        int n= s.size();
        bool ok=false;
        for(int i=1;i<n;i++){
            if(s[0]!=s[i]){
                swap(s[0],s[i]);
                ok=true;
                break;

            }
        }
        if(!ok){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
            cout<<s<<el;
        }
        
     
    }
    return 0;
}
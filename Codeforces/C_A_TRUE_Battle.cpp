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
        string s;
        cin>>s;
        bool ok =false;
        if(s[0]=='1' || s[n-1]=='1'){
            ok =true;
        }
        else{
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='1' && s[i+1]=='1'){
                    ok=true;
                    break;
                }
            }
        }
        cout<<(ok?"YES":"NO")<<el;

     
    }
    return 0;
}
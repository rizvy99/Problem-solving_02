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
        int n=s.size();
        bool ok = false;
        for(int i=0;i+1<n;i++){
            if(s[i]==s[i+1]){
                ok=true;
            }
        }
        if(ok){
            cout<<1<<el;
        }else{
            cout<<n<<el;
        }
         
     
    }
    return 0;
}
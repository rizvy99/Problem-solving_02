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
        int x=0,y=0;
        bool ok= false;
        for(auto &c :s){
            if(c=='L'){x--;}
            else if(c=='R'){x++;}
            else if(c=='U'){y++;}
            else{y--;}
            if(x==1 && y==1){
                ok=true;
                break;
            }

        }
        cout<<(ok ? "YES" : "NO")<<el;
     
    }
    return 0;
}
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
        s='0'+s;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]>='5'){
                s[i-1]++;
                n=i;
            }
        }
        for(int i=(s[0]=='0');i<s.size();i++){
            if(i>=n){
                cout<<'0';
            }else{
                cout<<s[i];
            }
        }cout<<el;
     
    }
    return 0;
}
 
        
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool ok=true;
        for(int r=0;r<k;r++){
            int one = 0;
            for(int i=r;i<n;i+=k){
                if(s[i]=='1'){
                    one++;
                }
            }
            if(one%2){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }   
    }
}
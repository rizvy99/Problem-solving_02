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
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int cnt_8=0,cnt_4=0;
        for(int i=0;i<n;i++){
            if(s[i]=='8'){
                cnt_8++;
            }
            else{
                cnt_4++;
            }
        }
        int mx=max(abs(x),abs(y));
        int add=abs(x)+abs(y);
        if(mx<=(cnt_8+cnt_4) && add<=cnt_4+2*cnt_8){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}
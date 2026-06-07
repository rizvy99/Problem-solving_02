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
        string s;;
        cin>>s;
        int n=s.size();
        int pref2 = 0, suf = 0;
        for(auto u:s){
            if(u=='1' || u=='3'){
                suf++;
            }
        }
        int ans = pref2+suf;
        for(int i=0;i<s.size();i++){
            if(s[i]=='2'){
                pref2++;
            }
            else if(s[i]=='1' || s[i]=='3'){
                suf--;
            }
            ans = max(ans, pref2+suf);
        }
            cout<<n-ans<<el;

    }
    return 0;
}
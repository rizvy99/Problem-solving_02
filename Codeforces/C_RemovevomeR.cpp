//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        bool ok=false,ok1=false;
        for(auto u:s){
            if(u =='0'){ok=true;}
            else{ok1=true;}
        }
        int cnt = 1;
        for(int i = 1;i<n;i++){
            if (s[i] != s[i-1]){cnt++;}
        }

        if(ok && ok1 && cnt == 2){
            cout<<2<<el;
        }else {
            cout<<1<<el;
        }

    }
    return 0;
}

 
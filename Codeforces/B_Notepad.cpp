#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
bool substring(const string &s) {
    int n = s.size();
    map<string, int>mp;
    for(int i = 0;i+1<n;i++){
        string sr=s.substr(i,2);  
        if(mp.count(sr)){
            if(mp[sr]<i-1){  
                return true; 
            }
        }else{
            mp[sr] = i;
        }
    }
    return false; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<(substring(s)?"YES":"NO")<<el;
    }

    return 0;
}


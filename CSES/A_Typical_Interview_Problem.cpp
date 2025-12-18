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
    string sr = "";
    for(int i = 1;sr.size()<=100;i++){
        if(i%3==0){
            sr.push_back('F');
        }
        if(i%5==0){
            sr.push_back('B');
        }
    }
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(sr.find(s)<sr.size()){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }

    return 0;
}

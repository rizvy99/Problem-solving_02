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
    string s;
    cin>>s;int n=s.size();

   for(int i=0;i<s.size();i++){
    if(s[0]=='c' || s[n-1]=='f'){
        yes
        break;
    }
    else{
        no
        break;
    }

     }
    return 0;
}
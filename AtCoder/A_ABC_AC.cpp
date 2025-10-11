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
    string s;
    cin>>s;
    int n= s.size();
    int div =n/2;
    for(int i=0;i<div;i++){
        cout<<s[i];
    }
    for(int i=div+1;i<n;i++){
        cout<<s[i];
    }cout<<el;
    return 0;
}
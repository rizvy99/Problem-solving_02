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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c && b<=d){
        cout<<"No"<<el;
    }else{
        if(a<=c && b>d){
            cout<<"Yes"<<el;
        }else{
            cout<<"No"<<el;
        }
    }

    return 0;
}
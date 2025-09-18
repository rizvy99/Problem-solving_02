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
    if(t>=2 && t<=3){
        cout<<"NO SOLUTION"<<el;
    }
    else if(t==4){
            cout<<"2 4 1 3"<<el;
    }
    else{
        for(int i=1;i<=t;i+=2){
            cout<<i<<" ";
        }
        for(int i=2;i<=t;i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}

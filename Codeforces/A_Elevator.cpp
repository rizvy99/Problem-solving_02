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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(s=="front"){
        if(n==1){
            cout<<"L"<<el;
        }else{
            cout<<"R"<<el;
        }
    }else{
        if(n==1){
            cout<<"R"<<el;
        }else{
            cout<<"L"<<el;
        }
    }
    return 0;
}
 
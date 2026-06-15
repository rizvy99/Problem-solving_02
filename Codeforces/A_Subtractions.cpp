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
        ll a,b;
        cin>>a>>b;
        ll cnt=0;
        while(a>0 && b>0){
            if(a<b){
                swap(a,b);
            }
            if(b == 0){
                break;
            }
            cnt+=a/b;
            a%=b;
        }
        cout<<cnt<<el;

    }
    return 0;
}
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
        ll n;
        cin>>n;
        ll b = 12*(n/12);
        ll a = n-b;
        if(a==10){
            b-=12;
            a+=12;
        }
        if(b>=0){
            cout<<a<<" "<<b<<el;
        }else{
            cout<<-1<<el;
        }
    }
    return 0;
}

    
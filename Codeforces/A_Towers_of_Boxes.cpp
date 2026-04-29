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
        int n,m,d;
        cin>>n>>m>>d;
        if(m > d){
            cout << n << el;
        }
        else{
            int bx = d / m + 1;
            if(n % bx == 0){
                cout << n / bx << el;
            } else {
                cout << (n / bx) + 1 << el;
            }
        }
    }
    return 0;
}
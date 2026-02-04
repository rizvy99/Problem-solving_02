//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
const int mx=1e6+123;
int nod[mx];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n =1000000;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            nod[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<nod[x]<<el;
    }
    return 0;
}
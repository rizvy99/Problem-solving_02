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
        int n;
        cin>>n;
        int k=0;
        while(1<<k+1<=(n-1)){
            k++;
        }
        for(int i=(1<<k)-1;i>=0;i--){
            cout<<i<<" ";
        }
        for(int i=1<<k;i<n;i++){
            cout<<i<<" ";
        }
        cout<<el;
     
    }
    return 0;
}
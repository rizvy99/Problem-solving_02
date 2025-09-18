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
    int t,n=0;
    cin>>t;
    for(int i=1;i<=10;i++){
        if(t%i==0){
             n=i;
             n=max(n,i);
        }else{
            continue;
        }
    }
    cout<<n<<el;
    return 0;
}

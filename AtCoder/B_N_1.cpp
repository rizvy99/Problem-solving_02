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
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    int sum=0;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        sum+= v[i];
    }
    int sub = sum - m;
    bool ok = false;
    for(int i = 0;i<n;i++){
        if(v[i] == sub){
            ok = true;
            break;
        }
    }
    cout<<(ok?"Yes":"No")<<el;

    return 0;
}

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
        int n;
        cin>>n;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        vector<int>v1(n+1,0);
        bool ok = true;
        for(int i=1;i<=n;i++){
            if(v1[i]){
                continue;
            }
            vector<int> idx, val;
            int cur = i;
            while(cur<=n){
                v1[cur]=1;
                idx.push_back(cur);
                val.push_back(v[cur]);
                cur *= 2;
            }
            sort(idx.begin(), idx.end());
            sort(val.begin(), val.end());
            if (idx != val) {
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<el;
        }
        else{
            cout<<"NO"<<el;
        }
    }

    return 0;
}

 

       
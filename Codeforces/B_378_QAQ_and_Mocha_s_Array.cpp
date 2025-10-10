#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
const int N = 1e5 + 10;
int v[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 0;
        //vector<ll>v(n);
        for(int i = 1;i<=n;i++){
            cin>>v[i];
            if(v[i]==1){
                x = 1;  
            }
        }
        if(x){
            cout<<"Yes"<<el;
        }else{
            sort(v+1,v+n+1);
            vector<int> v1;
            for(int i =2;i<=n;i++){
                if(v[i]% v[1]!=0){
                    v1.push_back(v[i]);
                }
            }
            sort(v1.begin(), v1.end());
            int m = v1.size();  
            for(int j =1;j<m;j++){
                if(v1[j]%v1[0] != 0){
                    x = 1;  
                    break;
                }
            }

            if(x == 0){
                cout<<"Yes"<<el;
            }else{
                cout<<"No"<<el;
            }
        }
    }

    return 0;
}

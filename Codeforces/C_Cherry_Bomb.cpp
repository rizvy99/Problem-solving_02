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
        int n,k;
        cin >>n>>k;
        vector<int>a(n),b(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int x = -1;  
        bool flag = false;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if(x==-1){
                    x = a[i] + b[i];
                }
                else if(x != a[i]+b[i]){
                    cout << 0 <<el;
                    flag = true;
                    break;
                }
            }
        }
        if(flag){continue;}
        if(x == -1){
            sort(a.begin(), a.end());
            int mx = a[n - 1] - a[0];
            cout<<k-mx+1<<el;
            continue;
        }
        bool ok = true;
        for(int i = 0;i<n;i++){
            if(a[i]>x || x-a[i]>k){
                cout<<0<<el;
                ok = false;
                break;
            }
        }
        if(!ok){continue;}
        cout<<1<<el;
    }

    return 0;
}

     
    
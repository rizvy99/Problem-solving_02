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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0,cnt0=0;
        bool ok = false;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        int i = 0, j = n - 1, incre = 1;
        while (i < j){
            int mn = min(v[i], v[j]);
            int mx = max(v[i], v[j]);
            if (incre % 2 == 0){
                if (v[i] == mn){
                    cout<<"LR";
                }
                else{
                    cout<<"RL";
                }
            }
            else{
                if (v[i] == mx){
                    cout<<"LR";
                }
                else{
                    cout<<"RL";
                }
            }
            i++;
            j--;
            incre++;
        }
        if(n%2!= 0){
            cout<<"R";
        }cout<<el;
    }
    return 0;
}
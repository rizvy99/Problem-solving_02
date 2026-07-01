//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){ 
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int val = 0;
        int mn = 0, mx = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            val+=v[i];
            mn=min(mn, val);
            mx = max(mx, val);
        }
        int cal_l = -mn;
        int cal_r = k - mx;

        if (cal_l <= cal_r) yes
        else no
    }

    return 0;
}
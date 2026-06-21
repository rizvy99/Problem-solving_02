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
        vector<int>v(n);
        int cnt_0=0,cnt_1=0,cnt_2=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){cnt_0++;}
            else if(v[i]==1){cnt_1++;}
            else{cnt_2++;}
        }
        int ans = cnt_0;
        int p = min(cnt_1, cnt_2);
        ans += p;
        cnt_1 -= p;
        cnt_2 -= p;
        ans += cnt_1 / 3;
        ans += cnt_2 / 3;
        cout<<ans<<el;
    }
    return 0;
}
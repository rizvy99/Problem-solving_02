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
        vector<ll>v(n);
        vector<ll>v_0;
        vector<ll>v1(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]--;
            if(v[i]==-1){
                v_0.push_back(i);
            }else{
                v1[v[i]]=1;
            }
        }
        if(v_0.size()==1){
            int mis =0;
            for(int i=0;i<n;i++){
                if(v1[i]==0){
                    mis=i;
                }

            }
            v[v_0[0]]=mis;
        }
        int l = 0, r = n - 1;
        while(l < n && v[l] == l) l++;
        while(r >= 0 && v[r] == r) r--;
        cout << max(0, r - l + 1) <<el;
    }
    return 0;
}
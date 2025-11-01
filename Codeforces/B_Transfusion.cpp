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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll od_sum = 0, evn_sum = 0;
        for(int i = 0;i<n;i++){
            if(i & 1){
                od_sum+=v[i];
            }
            else{
                evn_sum += v[i];
            }
        }
        int od_cnt=n/2,evn_cnt=n/2;
        if(n & 1){
            evn_cnt++;
        }
        if(od_sum%od_cnt!=0 || evn_sum%evn_cnt!=0 || od_sum/od_cnt!=evn_sum/evn_cnt){
            cout << "NO"<<el;
            continue;
        }
        cout<<"YES"<<el;
    }

    
    return 0;
}

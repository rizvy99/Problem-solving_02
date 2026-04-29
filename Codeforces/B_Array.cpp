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
        cin >> n;
        vector<ll>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            int gre_cnt=0, sma_cnt=0;
            for(int j=i+1; j<n; j++){
                if(v[j]>v[i]){
                    gre_cnt++;
                }
                else if(v[j]<v[i]){
                    sma_cnt++;
                }
            }
            cout<<max(gre_cnt,sma_cnt)<<" ";
        }
        cout << el;

    }
    return 0;
}
 
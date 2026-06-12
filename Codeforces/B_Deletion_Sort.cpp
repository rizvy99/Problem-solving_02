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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //sort(a.begin(), a.end());
        int cnt=1;
        for(int i=0;i<n-1;i++){
             if(a[i]<=a[i+1]){
                cnt++;
             }else{
                break;
             }
        }
        if(cnt==n){
            cout<<n<<el;
        }else{
            cout<<1<<el;
        }
    }
    return 0;
}
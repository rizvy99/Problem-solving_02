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
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n-1;i++){
            if(a[i] > a[i+1]){
                int val = a[i];
                a[i] = max(0,(a[i]-a[i + 1]));
                a[i+1] = max(0, (val-a[i+1]));
            } 
            else if (a[i] < a[i + 1]) {
                int val = a[i + 1];
                a[i] = max(0, a[i + 1] - a[i]);
                a[i + 1] = max(0,(val-a[i]));
            } 
            else {
                a[i] = 0;a[i + 1] = 0;
            }
        }
        bool ok = true;
        for(int i = 1;i<n;i++){
            if(a[i] < a[i-1]){
                ok = false;
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<el;
    }
    return 0;
}

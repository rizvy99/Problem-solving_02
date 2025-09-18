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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        bool found = false;
        int result_l = 0, result_r = 0;
        for (int l = 0; l < n - 2 && !found; l++) {
            for (int r = l + 1; r < n - 1 && !found; r++) {
                int s1 = 0;
                for (int i = 0; i <= l; i++) {
                    s1 += v[i];
                }
                s1 %= 3;
                int s2 = 0;
                for (int i = l + 1; i <= r; i++) {
                    s2 += v[i];
                }
                s2 %= 3;
                int s3 = 0;
                for (int i = r + 1; i < n; i++) {
                    s3 += v[i];
                }
                s3 %= 3;
                bool all_same = (s1 == s2) && (s2 == s3);
                bool all_different = (s1 != s2) && (s2 != s3) && (s1 != s3);
                
                if (all_same || all_different) {
                    found = true;
                    result_l = l + 1;  
                    result_r = r + 1;  
                }
            }
        }
        
        if (found) {
            cout << result_l << " " << result_r <<el;
        } else {
            cout << "0 0"<<el;
        }
    }
    
    return 0;
}
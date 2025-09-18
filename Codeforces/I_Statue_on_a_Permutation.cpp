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
        string s;
        cin >> s;
        int cnt_b = 0;
        for(auto c: s){
            if(c == 'B'){
                cnt_b++;
            }
        }
        if(cnt_b == 0){
            cout << -1 << '\n';
            continue;
        }
        vector<int> v(n);
        int low = 1, high = n;
        for(int i = 0; i < n; ++i){
            if(s[i] == 'B'){
                v[i] = low++;
            } else { 
                v[i] = high--;
            }
        }
        for(int i = 0; i < n; i++){
            cout << v[i];
            if(i + 1 == n){
                cout <<el;
            } else {
                cout << " ";
            }
        }
    }
    return 0;
}

        
 
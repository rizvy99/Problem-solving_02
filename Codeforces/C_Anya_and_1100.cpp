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
        string s;
        cin>>s;
        int n=s.size();
        int q;
        cin>>q;
        int cnt = 0;
        for(int i = 0;i+3 < n;i++){
            if(s.substr(i, 4) == "1100")
                cnt++;
        }
        while(q--){
            int i, v;
            cin>>i>>v;
            i--;  
            int l = max(0, i - 3);
            int r = min(n - 1, i + 3);
            int first = 0;
            for(int j = l;j+3<=r;j++){
                if(s.substr(j, 4) == "1100"){
                    first++;
                }
            }
            s[i] = char('0' + v);
            int last = 0;
            for(int j = l;j+3<=r;j++){
                if(s.substr(j, 4) == "1100"){
                    last++;
                }
            }
            cnt += (last - first);
            cout<<(cnt > 0 ? "YES" : "NO")<<el;
        }
    }

    return 0;
}

  
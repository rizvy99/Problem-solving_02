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
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(int i = 0;i<n;i++){
        cin >> s[i];
    }
    set<vector<string>>st;
    for(int i = 0;i<=n-m;i++){
        for(int j=0;j<=n-m;j++){
            vector<string>sr;
            for(int r=0;r<m;r++){
                sr.push_back(s[i+r].substr(j,m));
            }
            st.insert(sr);
        }
    }
    cout<<st.size()<<el;

    return 0;
}

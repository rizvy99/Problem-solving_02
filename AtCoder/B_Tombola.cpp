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
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>> v(h, vector<int>(w));
    for(int i = 0;i<h;i++){
        for(int j =0;j<w;j++){
            cin>>v[i][j];
        }
    }
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int ans = 0;
    for(int i=0;i<h;i++){
        int cnt = 0;
        for(int j=0;j<w;j++){
            if(s.count(v[i][j])){
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout<<ans<<el;
    return 0;
}

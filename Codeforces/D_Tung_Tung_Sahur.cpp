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
       string s, s1;
        cin >> s >> s1;
        int s_size = s.size();
        int s1_size = s1.size();
        if (s_size > s1_size || s1_size > 2 * s_size || s[0] != s1[0]) {
            cout << "NO" << el;
            continue;
        }
        vector<ll> s_p, s1_p;
        int cnt = 1;
        for (int i = 1; i < s_size; i++) {
            if (s[i] != s[i - 1]) {
                s_p.push_back(cnt);
                cnt = 1;
            } else {
                cnt++;
            }
        }
        s_p.push_back(cnt);
        cnt = 1;
        for (int i = 1; i < s1_size; i++) {
            if (s1[i] != s1[i - 1]) {
                s1_p.push_back(cnt);
                cnt = 1;
            } else {
                cnt++;
            }
        }
        s1_p.push_back(cnt);

        if (s_p.size() != s1_p.size()) {
            cout << "NO" << el;
            continue;
        }
        bool flag = true;
        for (int i = 0; i < s_p.size(); i++) {
            if (s_p[i] > s1_p[i] || s_p[i] * 2 < s1_p[i]) {
                flag = false;
                break;
            }
        }
        if (flag){cout << "YES" << el;}
        else{cout << "NO" << el;}
    }

    return 0;
}
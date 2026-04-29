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
        string s;
        cin >> s;
        while (true) {
            string ans = "";
            bool f = false;
            for (int i = 0; i < s.size(); i++) {
                if (i < s.size() - 1 && s[i] == s[i + 1]) {
                    f = true;
                    i++;
                } else {
                    ans += s[i];
                }
            }
            if (!f) break;
            s = ans;
        }
        if(s.size()==0){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }

    }
}

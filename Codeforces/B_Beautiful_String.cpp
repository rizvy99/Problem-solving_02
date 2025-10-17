#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
 
bool b1(const string &s){
    for(int i = 1;i<s.size();i++){
        if(s[i] < s[i - 1])return false;
    }
    return true;
}

bool b2(const string &s){
    for(int i = 0,j = s.size() - 1;i<j;i++,j--){
        if (s[i] != s[j]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        bool found = false;
        for(int k = 0; k < (1 << n); k++){
            string p = "", x = "";
            vector<int> v1;
            for (int i = 0; i < n; i++) {
                if (k & (1 << i)) {
                    p += s[i];
                    v1.push_back(i + 1);
                } else {
                    x += s[i];
                }
            }
            if (b1(p) && b2(x)) {
                cout << v1.size() <<el;
                for (int i = 0; i < v1.size(); i++) {
                    cout << v1[i] << (i + 1 == v1.size() ? '\n' : ' ');
                }
                found = true;
                break;
            }
        }

        if (!found)cout<<"-1"<<el;
    }

    return 0;
}

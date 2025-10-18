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
    string s;
    vector<pair<int,int>> st; 
    int cnt = 0, mn = 0;
    while(t--){
        int n;
        cin>>n;
        if(n == 1){
            char c;
            cin>>c;
            if(c =='('){cnt++;}
            else{cnt--;}
            mn = min(mn, cnt);
            st.push_back({cnt, mn});
            s.push_back(c);
        } 
        else{
            auto [last_bal, last_min] = st.back();
            st.pop_back();
            s.pop_back();
            if(st.empty()){
                cnt = 0;
                mn = 0;
            }else{
                cnt = st.back().first;
                mn = st.back().second;
            }
        }
        if(cnt == 0 && mn >= 0){
            cout<<"Yes"<<el;
        }
        else{
            cout<<"No"<<el;
        }
    }
    return 0;
}

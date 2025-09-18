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
    int n;
    cin>>n;
    set<int>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    cout<<s.size()<<el;
    return 0;
}
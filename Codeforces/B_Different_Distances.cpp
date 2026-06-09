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
        cin>>n;
        if(n==2) {
            cout<<"1 2 1 1 2 2 1 2"<<el;
            continue;
        }
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        for(int i=1;i<=n;i++){
            v.push_back((i % n) + 1);
        }
        for(int i=1;i<=n;i++){
            v.push_back(((i + 2) % n) + 1);
        }
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<el;
    }

    return 0;
}
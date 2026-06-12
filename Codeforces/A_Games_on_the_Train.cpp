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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        int x=*max_element(all(a));
        //v.push_back(x);
        for(int i=0;i<n;i++){
            int x1= (x+1)-a[i];
            v.push_back(x1);
        }
        int k=*max_element(all(v));
        cout<<k<<el;

    }
    return 0;
}
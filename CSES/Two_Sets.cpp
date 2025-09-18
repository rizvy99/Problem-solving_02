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
    int sum = (n*(n+1))/2;
    if(sum%2!=0){cout<<"NO"<<el;}
    else{
    cout<<"YES"<<el;
    vector<int>v1,v2;
    if(n%4==0){
        for(int i=1;i<=n;i++){
            int val1 = i % 4;
            if(val1==0 || val1==1){
                v1.push_back(i);
            }else{
                v2.push_back(i);
            }
        }
    }else if(n%4==3){
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
        for(int i=4 ;i<=n;i++){
            int val2 = i % 4;
            if(val2==0 || val2==3){
                v1.push_back(i);
            }else{
                v2.push_back(i);
            }
        }
    }
    cout<<v1.size()<<el;
    for(auto u :v1){
        cout<<u<<" ";
    }
    cout<<el;
    cout<<v2.size()<<el;
    for(auto u:v2){
        cout<<u<<" ";
    }
    cout<<el;
}
    return 0;
}
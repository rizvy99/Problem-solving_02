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
        ll n,k,x;
        cin>>n>>k>>x;
        ll min_sum=0,max_sum=0;
        min_sum = k*(k+1)/2;
        max_sum = k*(2*n-k+1)/2; 
        if(x<=max_sum && x>=min_sum){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
    }
    return 0;
}
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
        if(n%2==0){
            cout<<2<<el;
            cout<<1<<" "<<n<<el;
            cout<<1<<" "<<n<<el;
        }else{
            cout<<4<<el;
            cout<<1<<" "<<n-1<<el;
            cout<<1<<" "<<n-1<<el;
            cout<<2<<" "<<n<<el;
            cout<<2<<" "<<n<<el;
        }
    }

    return 0;
}
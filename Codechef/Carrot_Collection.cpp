//Alrazi Hosen Rizvy
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes  cout<<"YES"<<el;
#define no  cout<<"NO"<<el;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=l-1;i<r;i++){
            v[i]=0;
        }
        int val1=0,val2=0;
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                val1+=v[i];
            }else{
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]!=0){
                val2+=v[i];
            }else{
                break;
            }
        }
        cout<<max(val1,val2)<<el;
    }
    return 0;
}
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
        int n,k;
        cin>>n>>k;
        int x=n*n;
        if(x-k==1){
            cout<<"NO"<<el;
        }else{
            cout<<"YES"<<el;
            for(int i=1;i<=n;i++){
                char ch='O';
                for(int j=1;j<=n;j++){
                    if(k>0){
                        k--;
                        cout<<"U";
                        ch='U';
                    }else{
                        if(i!=n and ch=='U'){
                            cout<<"D";
                        }else if(j!=n){
                            cout<<"R";
                        }else{
                            cout<<"L";
                        }
                    }
                }
                cout<<el;
            }
        }
    }
    return 0;
}
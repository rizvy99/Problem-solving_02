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
            int a,b,cnt=0;
            cin>>a>>b;
            for(int i=a;i<=b;i++){
                if(i<10 &&(i==2 ||i==3 ||i==9)){
                    cnt++;
                }else{
                    if(i%10==2 || i%10==3 || i%10==9){
                        cnt++;
                    }
                }
            }
            cout<<cnt<<el;

    }
    return 0;
}

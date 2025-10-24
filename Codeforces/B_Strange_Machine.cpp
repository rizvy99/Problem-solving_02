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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            ll a;
            cin>>a;
            ll cnt = 0;
            int i = 0;
            while(a > 0){
                for(int j = 0;j<n && a>0;j++){
                    if(s[i] == 'A'){
                        a-=1;
                    }
                    else{
                        a/=2;
                    }
                    cnt++;
                    i = (i+1)%n;
                }
                if(a>1000000 && count(s.begin(),s.end(),'A')==n){
                    cnt+=(a/n)*n;
                    a%=n;
                    if(a==0){
                        break;
                    }
                }
            }
            cout<<cnt<<el;
        }
    }

    return 0;
}

 
        
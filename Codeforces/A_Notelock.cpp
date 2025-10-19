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
        string s;
        cin>>s;
        int one =-k,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i-one>=k){
                    cnt++;
                    one=i;
                }else{
                    one=i;
                }
            }
        }
        cout<<cnt<<el;
    }
    return 0;
}

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
        string a,b;
        cin>>a>>b;
        int cnt_0=0,cnt_1=0;
        /*for(int i=0;i<n;i++){
            if(a[i]=='1'){cnt_1++;}
            if(b[i]=='0'){cnt_0++;}
        }
        if(cnt_1==0){
            cout<<"YES"<<el;
        }
        else if(cnt_1==cnt_0){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }*/
        for(int i=0;i<n;i++){
            if(i%2==1){
                if(a[i]=='0'){
                    cnt_0++;
                }
                if(b[i]=='0'){
                    cnt_1++;
                }
            }else{
                if(a[i]=='0'){
                    cnt_1++;
                }
                if(b[i]=='0'){
                    cnt_0++;
                }
            }
        }
        if(cnt_1>=(n+1)/2 && cnt_0>=n/2){
            cout<<"YES"<<el;
        }else{
            cout<<"NO"<<el;
        }
     
    }
    return 0;
}
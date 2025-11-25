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
        string s;
        cin>>s;
        int cnt_zero=0,cnt_on=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt_zero++;
            }else{
                cnt_on++;
            }
        }
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(cnt_on==0){
                    break;
                }
                else{
                    cnt_on--;
                    cnt++;
                }
            }else{
                if(cnt_zero==0){
                    break;
                }
                else{
                    cnt_zero--;
                    cnt++;
                }
            }
        }
        cout<<s.size()-cnt<<el;
     
    }
    return 0;
}
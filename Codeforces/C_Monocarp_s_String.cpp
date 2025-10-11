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
        string s;
        cin>>s;
        int cnt_a=0,cnt_b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                cnt_a++;
            }else{
                cnt_b++;
            }
        }
        //cout<<cnt_a<<" "<<cnt_b<<el;
        if(cnt_a==cnt_b){
            cout<<0<<el;
        }else if(cnt_a==0 || cnt_b==0){
            cout<<-1<<el;
        }else{
            int dif = cnt_a - cnt_b;
            map<int,int>mp;
            mp[0] = 0;
            int val = 0, ans = n;
            for(int i = 1;i<=n;i++){
                if(s[i-1]=='a'){
                    val+=1;
                }else{
                    val+=-1;
                }
                auto it = mp.find(val-dif);
                if(it != mp.end()){
                    ans = min(ans, i - it->second);
                }
                mp[val] = i;
            }
            if(ans==n){
                cout<<-1<<el;
            }else{
                cout<<ans<<el;
            }
            
        }
     
    }
    return 0;
}



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
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<ll>pre(n+1,0);
        for (int i = 1; i <=n; i++){
            cin >> v[i];
            if(v[i]>0){
                pre[v[i]]==1;
            }
        }
        vector<ll>v1;
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                v1.push_back(i);
            }
        }
        vector<ll>v2;
        for(int x=1;x<=n;x++){
            if(!pre[x]){
                v2.push_back(x);
            }
        }
        bool flag = false;
        if(v1.size()==1 && v2.size()==1 &&v1[0]==v2[0]){
            flag = true;
        }
        vector<char>ch(n+1,0);
        for(int i=1;i<=n;i++){
            if(v[i]>0 && v[i]!=i){
                ch[i]=1;
            }
            else if(v[i]==0){
                if(!flag){
                    ch[i]=1;
                }else{
                    ch[i]=0;
                }
            }
            else{
                ch[i]=0;
            }
        }
        int l=n+1,r=0;
        for(int i=1;i<=n;i++){
            if(ch[i]){
                l=min(l,i);
                r=max(r,i);
            }
        }
        if(r==0){cout<<0<<el;}
        else{cout<<r-l+1<<el;}

         
    }

    return 0;
}

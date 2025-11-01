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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    vector<int>pre_a(n+1,0),pre_b(n+1,0);
    for(int i = 0;i<n;i++){
        pre_a[i+1]=pre_a[i];
        pre_b[i+1]=pre_b[i];
        if(s[i]=='a'){
            pre_a[i+1]++;
        }else{  
            pre_b[i+1]++;
        }
    }
    ll ans=0;
    int l_a = 0,l_b = 0; 
    for(int r = 1;r<=n;r++){
        while(l_a<=r-1 && pre_a[r]-pre_a[l_a]>=a){
            l_a++; 
        }
        int mn_a = l_a - 1;  
        while(l_b<=r-1 && pre_b[r]-pre_b[l_b]>=b){
            l_b++;
        }
        int mn_b = l_b;  
        int val = mn_a-mn_b+1;
        if(val>0){
            ans+=val;
        }
    }
    cout<<ans<<el;

    return 0;
}

  
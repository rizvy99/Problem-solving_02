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
        string s;
        cin>>n>>s;
        s = "0"+s; 
        int ans = 0,ini = s[0];
        for(int i = 1;i<=n;i++){
            int dig = s[i];
            if(ini!=dig){
                ans++;
            }
            ini= dig;
        }
        if(ans >= 3){
            cout<<ans-2+n<<el;
        }
        else if(ans==2){
            cout<<ans-1+n<<el;
        }
        else{
            cout<<ans+n<<el;
        }
    }

    return 0;
}

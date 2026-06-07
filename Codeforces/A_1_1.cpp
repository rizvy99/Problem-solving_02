//Alrazi Hosen Rizvy
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
        cin >> n;
        string s;
        cin >> s;
        for(int i = 1;i<n-1;i++){
            if(s[i-1]=='1'&&s[i+1]=='1'){
                s[i]='1';
            }
        }
        int ans1 = 0,ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                ans1++;
            }
        }
        for(int i = 1; i < n - 1; i++) {
            if(s[i - 1]=='1' && s[i + 1] == '1'){
                s[i] = '0';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans++;
            }
        }
        cout<<ans<<" "<<ans1<<el;
    }

    return 0;
}

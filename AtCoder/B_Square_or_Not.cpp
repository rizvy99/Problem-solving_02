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
        ll n,k,x,y,a,b,m,cnt=0,sum=0,cnt1=0;
        //bool ok = false;
        cin>>n;
        string s;
        cin>>s;
        k = sqrt(n);
        if (k * k != n) {
            cout<<"No"<<el;
            continue;
        }
        bool ok = true;
        for (int i = 0; i < k && ok; i++) {
            for (int j = 0; j < k; j++) {
                char ch;
                if (i == 0 || i == k - 1 || j == 0 || j == k - 1)
                    ch = '1';  
                else
                    ch = '0';            
                if (s[i * k + j] != ch) {
                    ok = false;
                    break;
                }
            }
        }

        cout<<(ok?"Yes" : "No")<<el;
    }

    return 0;
}

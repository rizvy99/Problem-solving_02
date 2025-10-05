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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ini = v[0];
        int cnt=1;
        for(int i =0;i<n;i++){
            ini &=v[i];
            if(ini==0){
                if(i==n-1){
                    break;
                }else{
                    cnt++;
                    ini = v[i+1];
                }
            }
        }
        if(ini!=0){
            cnt--;
        }
        cnt=max(1,cnt);
        cout<<cnt<<el;
        
     
    }
    return 0;
}
/*int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cur = arr[0];
    int part = 1;

    for (int i = 0; i < n; i++) {
        cur &= arr[i];

        if (cur == 0) {
            if (i == n - 1) {
                break;
            } else {
                part++;
                cur = arr[i + 1];
            }
        }
    }

    if (cur != 0) {
        part--;
    }

    part = max(part, 1);

    cout << part << '\n';*/
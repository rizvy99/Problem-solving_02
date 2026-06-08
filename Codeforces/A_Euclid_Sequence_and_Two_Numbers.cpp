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
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>v1;
        sort(v.begin(), v.end(), greater<int>());
        if(n==2){
            cout<<v[0]<<" "<<v[1]<<el;
            continue;
        }
        int cnt=0;
        if(n>2){
            for(int i=0;i<n-2;i++){
                if(v[i]%v[i+1]== v[i+2]){
                    cnt++;
                }
            }
        }
        if(cnt==n-2){
            cout<<v[0]<<" "<<v[1]<<el;
        }
        else{
            cout<<-1<<el;
        }
    }

    return 0;
}
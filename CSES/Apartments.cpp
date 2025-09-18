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
    int n,m,k,cnt=0,i=0,j=0;
    cin>>n>>m>>k;
    vector<int>v(n),v1(m);
    //vector<int>v1(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((abs(v[i]-v1[j]))<=k){
                cnt++;
                j++;
            }else{
                continue;
            }
        }
    }*/
   while(i<n && j<m){
    if(abs(v[i]-v1[j]) <= k){
            cnt++;
            i++;
            j++;
        }
        else if(v1[j] < v[i]-k){
            j++;
        }
        else{
            i++;
        }
   }
    cout<<cnt<<el;
    return 0;
}
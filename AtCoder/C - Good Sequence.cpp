#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,int>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    int cnt=0;
    for(auto u :mp){
        if(u.second >= u.first){
            cnt+= (u.second-u.first);
        }
        else
        {
            cnt+=u.second;
        }
    }
    cout<<cnt<<endl;
}

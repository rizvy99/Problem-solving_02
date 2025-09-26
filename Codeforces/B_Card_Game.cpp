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
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int val1,val2,ans=0;
        if(a1>b1){val1=1;}
        else if(a1==b1){val1=0;}
        else{val1=-1;}

        if(a2>b2){val2=1;}
        else if(a2==b2){val2=0;}
        else{val2=-1;}
        if(val1+val2>0){
            ans++;
        }
        if(a1>b2){val1=1;}
        else if(a1==b2){val1=0;}
        else{val1=-1;}
        
        if(a2>b1){val2=1;}
        else if(a2==b1){val2=0;}
        else{val2=-1;}
        if(val1+val2>0){
            ans++;
        }
        if(a2>b1){val1=1;}
        else if(a2==b1){val1=0;}
        else{val1=-1;}

        if(a1>b2){val2=1;}
        else if(a1==b2){val2=0;}
        else{val2=-1;}
        if(val1+val2>0){
            ans++;
        }
        if(a2>b2){val1=1;}
        else if(a2==b2){val1=0;}
        else{val1=-1;}
        
        if(a1>b1){val2=1;}
        else if(a1==b1){val2=0;}
        else{val2=-1;}
        if(val1+val2>0){
            ans++;
        }
        cout<<ans<<el;
     
    }
    return 0;
}
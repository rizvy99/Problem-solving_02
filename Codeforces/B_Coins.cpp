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
    int t=3;
    int A=0,B=0,C=0;
    while(t--){
    string s;
    cin>>s;
    int cnt_a=0,cnt_b=0,cnt_c=0;
     
        if(s[0]=='A' && s[1]=='<'  || s[1]=='>' && s[2]=='A'){
            cnt_a++;
        }
        else if(s[0]=='B' && s[1]=='<'  || s[1]=='>' && s[2]=='B'){
            cnt_b++;
        }
        else if(s[0]=='C' && s[1]=='<'  || s[1]=='>' && s[2]=='C'){
            cnt_c++;
        }
        //cout<<cnt_a<<" "<<cnt_b<<" "<<cnt_c<<el;
        A+=cnt_a;
        B+=cnt_b;
        C+=cnt_c;
    }
     if(A==1 && B==2 && C==0){
        cout<<"BAC"<<el;
    }
    else if(A==1 && B==0 && C==2){
        cout<<"CAB"<<el;
    }
    else if(A==2 && B==1 && C==0){
        cout<<"ABC"<<el;
    }
    else if(A==0 && B==1 && C==2){
        cout<<"CBA"<<el;
    }
    else if(A==2 && B==0 && C==1){
        cout<<"ACB"<<el;
    }
    else if(A==0 && B==2 && C==1){
        cout<<"BCA"<<el;
    }   
    else{
        cout<<"Impossible"<<el;
    }

    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
string numCol(int c) {
    string res = "";
    while(c > 0){
        c--;   
        res = char('A' + (c % 26)) + res;
        c /= 26;
    }
    return res;
}
int colNum(string s){
    int res = 0;
    for(char ch : s){
        res = res * 26 + (ch - 'A' + 1);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == 'R' && s.find('C') != string::npos && isdigit(s[1])){
            int r, c;
            sscanf(s.c_str(), "R%dC%d", &r, &c);
            cout<<numCol(c)<<r<<el;
        }else{
            string col = "", row = "";
            for (char ch : s) {
                if (isalpha(ch)) col += ch;
                else row += ch;
            }
            cout<<"R"<<row<<"C"<<colNum(col)<<el;
        }
    }
    return 0;
}

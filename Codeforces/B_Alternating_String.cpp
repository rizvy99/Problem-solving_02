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
        string s;
        cin >> s;

        int count_a = 0, count_b = 0;

        for (char c : s) {
            if (c == 'a') count_a++;
            else count_b++;
        }

        if (abs(count_a - count_b) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
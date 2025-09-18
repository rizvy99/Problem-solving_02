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
    cin >> t;
    cin.ignore();  

    while (t--) {
        string s;
        getline(cin, s);  
        string result;

        for (char c : s) {
            if (c == 'b') {
                for (int i = result.size() - 1; i >= 0; --i) {
                    if (islower(result[i])) {
                        result.erase(i, 1);
                        break;
                    }
                }
            } else if (c == 'B') {
                for (int i = result.size() - 1; i >= 0; --i) {
                    if (isupper(result[i])) {
                        result.erase(i, 1);
                        break;
                    }
                }
            } else {
                result.push_back(c);
            }
        }
        cout << result <<el;
    }

    return 0;
}

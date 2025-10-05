#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    int ans = 0;

    while (x > 0) {
        if (x % 2 == 1) { // last bit is 1
            ans++;        // increment counter
        }
        x = x / 2;        // shift right by dividing by 2
    }

    cout << ans << endl;
    return 0;
}

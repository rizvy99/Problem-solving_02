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
    long long N;
    cin >> N;

    // Divide N by 2 until it is no longer divisible by 2
    while (N % 2 == 0) {
        N /= 2;
    }

    // Divide N by 3 until it is no longer divisible by 3
    while (N % 3 == 0) {
        N /= 3;
    }

    // After removing all factors of 2 and 3, N should be 1 for it to be of the form 2^x * 3^y
    if (N == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string date = "31033025";

    int sum = 0;
    for (char digit : date) {
        sum += digit - '0';
    }

    cout << sum << endl;

    return 0;
}


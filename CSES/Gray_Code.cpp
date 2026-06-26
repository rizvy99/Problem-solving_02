// Alrazi Hosen Rizvy
#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll x = 1 << n;
    // cout << x << el;
    for (int i = 0; i < x; i++)
    {
        int gray = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((gray >> j) & 1);
        }
        cout << el;
    }
    return 0;
}
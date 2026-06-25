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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        ll val = (v[2] / v[0] + v[1] / v[0]) + 1;
        if (((v[2] % v[0] == 0 && v[1] % v[0] == 0)) && (val <= 6))
            yes else no
    }
    return 0;
}
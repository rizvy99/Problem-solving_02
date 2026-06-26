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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    int cnt_od = 0;
    string mid = "";
    string left = "";
    for (auto u : mp)
    {
        if (u.second % 2)
        {
            cnt_od++;
            mid = string(1, u.first);
        }
    }
    if (cnt_od > 1)
    {
        cout << "NO SOLUTION" << el;
        return 0;
    }
    for (auto u : mp)
    {
        left += string(u.second / 2, u.first);
    }
    string right = left;
    reverse(right.begin(), right.end());

    cout << left + mid + right << el;

    return 0;
}
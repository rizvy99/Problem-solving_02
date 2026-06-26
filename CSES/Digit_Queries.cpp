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
        ll k;
        cin >> k;
        ll digit_len = 1;
        ll cnt = 9;
        ll strt = 1;
        while (k > digit_len * cnt)
        {
            k -= digit_len * cnt;
            digit_len++;
            cnt *= 10;
            strt *= 10;
        }
        strt += (k - 1) / digit_len;
        string s = to_string(strt);
        cout << s[(k - 1) % digit_len] << el;
    }

    return 0;
}
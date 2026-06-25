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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt + 1 == v[i])
            {
                cnt++;
            }
        }
        cout << (n - cnt + k - 1) / k << el;
    }
    return 0;
}
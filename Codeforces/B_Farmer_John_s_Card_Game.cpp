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
         ll n, m;
    cin >> n >> m;

     
    vector<vector<ll>> ve(n, vector<ll>(m));
    vector<ll> p(n, -16);

    bool isValid = true; // সমাধান সম্ভব কিনা চেকের জন্য
    ll cowIndex = 0;     // গরুর ইনডেক্স কাউন্টার

    // প্রতিটি গরুর কার্ড ইনপুট নেওয়া
    for (ll cow = 0; cow < n; cow++) {

        // গরু cow-এর সব কার্ড ইনপুট নিচ্ছি
        for (ll j = 0; j < m; j++) {
            cin >> ve[cow][j];
        }

        // গরু cow-এর সবচেয়ে ছোট কার্ড বের করছি
        ll minCard = *min_element(ve[cow].begin(), ve[cow].end());

        // যদি ছোট কার্ডটি n-এর কম হয়, তাহলে সেটি কোন ইনডেক্সে থাকবে তা সংরক্ষণ করো
        if (minCard < n) {
            p[minCard] = cowIndex;
        }

        // সব গরুর জন্য cowIndex বাড়াও
        cowIndex++;

        // শর্ত: minCard অবশ্যই n-এর ছোট হতে হবে
        if (minCard >= n) {
            isValid = false;
        }

        // গরুর কার্ডগুলো sort করা
        sort(ve[cow].begin(), ve[cow].end());

        // এখন যাচাই করা হচ্ছে adjacent কার্ডের পার্থক্য n কিনা
        ll lastCard = ve[cow][0] - n;
        for (ll card : ve[cow]) {
            if (lastCard + n != card) {
                isValid = false;
                break;
            }
            lastCard = card;
        }
    }

    // যদি কোনো শর্ত ভাঙে, তাহলে কোনো সমাধান নেই
    if (!isValid) {
        cout << "-1\n";
        return;
    }

    // অন্যথায় p অ্যারে থেকে permutation আউটপুট দাও
    for (ll x : p) {
        cout << (x + 1) << " ";
    }
    cout << "\n";
    }

    return 0;
}

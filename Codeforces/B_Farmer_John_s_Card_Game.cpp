#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;   // টেস্ট কেস সংখ্যা

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end()); // প্রতিটি গরুর কার্ড ছোট থেকে বড় সাজাই
        }

        vector<int> perm(n);
        iota(perm.begin(), perm.end(), 0); // [0,1,2,...,n-1]

        bool found = false;

        // সব permutation চেক করা
        do {
            vector<int> idx(n, 0); // প্রতিটি গরুর কোন কার্ড ব্যবহার হয়েছে
            int pile = -1;
            bool ok = true;

            for (int round = 0; round < m && ok; round++) {
                for (int k = 0; k < n; k++) {
                    int cow = perm[k];
                    // এই গরুর ডেকে pile এর চেয়ে বড় কার্ড খুঁজে বের করা
                    while (idx[cow] < m && cards[cow][idx[cow]] <= pile) {
                        idx[cow]++;
                    }
                    if (idx[cow] == m) { 
                        ok = false; 
                        break; 
                    }
                    pile = cards[cow][idx[cow]];
                    idx[cow]++;
                }
            }

            if (ok) {
                found = true;
                for (int i = 0; i < n; i++) {
                    cout << perm[i] + 1 << " "; // +1 কারণ cow index 1-based
                }
                cout << "\n";
                break;
            }

        } while (next_permutation(perm.begin(), perm.end()));

        if (!found) cout << -1 << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Compute H-index of array b
        sort(b.begin(), b.end(), greater<int>());
        int h = 0;
        for(int i = 0; i < n; i++){
            if(b[i] >= i + 1)
                h = i + 1;
            else
                break;
        }

        cout << h << "\n";
    }

    return 0;
}

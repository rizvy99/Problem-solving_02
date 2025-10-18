#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;

void solve_case(int t) {
    int N, A, B;
    cin >> N >> A >> B;
    int C = 1;
    for (int x = A; x >= 1; --x) {
         
        if (B % x == 0) {
            C = x;
            break;  
        }
    }
    int R = B / C;
    vector<int> v;
    v.push_back(C);
    for (int i = 0; i < N - 1; ++i) {
        v.push_back(1);
    }
    v.push_back(R);
    for (int i = 0; i < N - 1; ++i) {
        v.push_back(1);
    }
    cout<<"Case #"<<t<<":";
    for(auto m : v){
        cout<<" "<<m;
    }
    cout<<el;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t = 1; t <= T;t++){
        solve_case(t);
    }

    return 0;
}
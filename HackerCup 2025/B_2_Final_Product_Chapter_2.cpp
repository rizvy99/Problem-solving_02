#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
const ll MOD = 1e9 + 7;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
ll md(ll n) {
    return power(n, MOD - 2);
}
 
const int mx = 65;  
ll fa[mx];
ll in[mx];

void precompute() {
    fa[0] = 1;
    for (int i = 1; i < mx; i++) {
        fa[i] = (fa[i - 1] * i) % MOD;
    }
    in[mx - 1] = md(fa[mx - 1]);
    for (int i = mx - 2; i >= 0; i--) {
        in[i] = (in[i + 1] * (i + 1)) % MOD;
    }
}
ll co(ll N, int e) {
    if (e == 0) return 1;
    if (e < 0 || e >= mx) {
        return 0; 
    }
    ll N_mod = (N - 1) % MOD;
    ll nu = 1;
    for (int i = 1; i <= e; i++) {
        nu = (nu * (N_mod + i)) % MOD;
    }
    ll result = (nu * in[e]) % MOD;
    return result;
}
ll cal(const map<ll, int>& prime_factors, ll N) {
    ll result = 1;
    for (const auto& pair : prime_factors) {
        int e = pair.second;  
        result = (result * co(N, e)) % MOD;
    }
    return result;
}
ll N_g, A_g, B_g;
map<ll, int> B_factors;
vector<ll> primes;
vector<int> exponents;
ll total_ways;
void generate_divisors(int k, ll current_P1, map<ll, int>P1_f) {
    if (k == primes.size()) {
        if (current_P1 == 0 || current_P1 > A_g) {
            return;
        }
        ll current_P2 = B_g / current_P1;
        if (current_P2 * current_P1 != B_g) {
            return;
        }
        map<ll, int> Pf;
        for (const auto& pair : B_factors) {
            ll p = pair.first;
            int total_e = pair.second;
            int e1 = P1_f.count(p) ? P1_f.at(p) : 0;
            int e2 = total_e - e1;
            if (e2 > 0) {
                Pf[p] = e2;
            }
        }
        ll ways_P1 = cal(P1_f, N_g);
        ll ways_P2 = cal(Pf, N_g);
        ll contribution = (ways_P1 * ways_P2) % MOD;
        total_ways = (total_ways + contribution) % MOD;
        
        return;
    }
    ll p_k = primes[k];
    int beta_k = exponents[k];  
    for (int alpha_k = 0; alpha_k <= beta_k; alpha_k++) {
        ll next_P1 = current_P1;
        if (alpha_k > 0) {
            for (int i = 0; i < alpha_k; ++i) {
                if (B_g / next_P1 < p_k) return; 
                next_P1 *= p_k;
            }
        }
        if (next_P1 > A_g) {
            if (alpha_k > 0) break;
        }
        map<ll, int> next_P1_factors = P1_f;
        if (alpha_k > 0) {
            next_P1_factors[p_k] = alpha_k;
        }
        generate_divisors(k + 1, next_P1, next_P1_factors);
    }
}
void factorize_B(ll B) {
    B_factors.clear();
    primes.clear();
    exponents.clear();
    ll temp_B = B;

    for (ll i = 2; i * i <= temp_B; ++i) {
        if (temp_B % i == 0) {
            int count = 0;
            while (temp_B % i == 0) {
                temp_B /= i;
                count++;
            }
            B_factors[i] = count;
            primes.push_back(i);
            exponents.push_back(count);
        }
    }
    if (temp_B > 1) {
        B_factors[temp_B] = 1;
        primes.push_back(temp_B);
        exponents.push_back(1);
    }
}

void solve(int case_num) {
    cin >> N_g >> A_g >> B_g;

    if (B_g == 0) {
        cout << "Case #" << case_num << ": 0" << el;
        return;
    }
    if (B_g == 1) {
        if (A_g >= 1) {
            cout << "Case #" << case_num << ": 1" << el; 
        } else {
            cout << "Case #" << case_num << ": 0" << el;
        }
        return;
    }
    factorize_B(B_g);
    total_ways = 0;
    generate_divisors(0, 1, map<ll, int>());

    cout << "Case #" << case_num << ": " << total_ways << el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();

    int T;
    cin >> T;
    for (int i = 1; i <= T;i++) {
        solve(i);
    }

    return 0;
}
 
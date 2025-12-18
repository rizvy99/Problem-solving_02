#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // Read the number of test cases
    if (!(cin >> t)) return 0; 
    
    while (t--) {
        long long n;
        // Read the grid size n
        if (!(cin >> n)) break;

        // --- Handle Base Cases (n=1 to n=4) directly from problem examples ---
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        if (n == 2) {
            // Max cost at (2, 2): 4 + 2 + 3 = 9
            cout << 9 << "\n";
            continue;
        }
        if (n == 3) {
            // Max cost at (2, 2): 8 + 5 + 7 + 9 = 29
            cout << 29 << "\n";
            continue;
        }
        if (n == 4) {
            // Max cost at (4, 3): 15 + 11 + 14 + 16 = 56
            cout << 56 << "\n";
            continue;
        }

        // --- Calculation for n >= 5 ---
        
        // For n >= 5, the maximum cost is achieved by the cell (n-1, n-1).
        // This cell has 4 neighbors and has one of the largest values 
        // surrounded by 4 large neighbors.
        
        // 1. Define the coordinates of the optimal cell: (r_opt, c_opt)
        long long r_opt = n - 1;
        long long c_opt = n - 1;
        
        // 2. Calculate the value of the optimal cell: 
        // Value(r, c) = (r - 1) * n + c
        long long center_value = (r_opt - 1) * n + c_opt; 
        
        // This simplifies to: center_value = (n-2) * n + (n-1) = n^2 - 2n + n - 1 = n^2 - n - 1

        long long sum_neighbors = 0;
        
        // 3. Calculate the sum of its 4 neighbors' values:

        // A. Neighbor Up: (r_opt - 1, c_opt)
        // Value_Up = center_value - n
        sum_neighbors += center_value - n; // (n^2 - 2n - 1)

        // B. Neighbor Down: (r_opt + 1, c_opt)
        // Value_Down = center_value + n
        sum_neighbors += center_value + n; // (n^2 - 1)

        // C. Neighbor Left: (r_opt, c_opt - 1)
        // Value_Left = center_value - 1
        sum_neighbors += center_value - 1; // (n^2 - n - 2)
        
        // D. Neighbor Right: (r_opt, c_opt + 1)
        // Value_Right = center_value + 1
        sum_neighbors += center_value + 1; // (n^2 - n)
        
        // The total cost is the center value plus the sum of neighbors
        long long max_cost = center_value + sum_neighbors;

        // Formula Check: 
        // max_cost = center_value * 5 - n - 1
        // max_cost = 5 * (n^2 - n - 1) - n - 1
        // The simplified closed-form formula is: 5*n^2 - 5*n - 5
        
        // long long max_cost_formula = 5 * n * n - 5 * n - 5; 
        
        cout << max_cost << "\n";
    }

    return 0;
}
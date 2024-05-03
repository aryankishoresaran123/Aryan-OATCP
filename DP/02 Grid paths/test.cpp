/*
    GO TO THE END OF THE FILE FOR MAIN CODE
*/

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    // Read the grid
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    // Initialize DP table
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Base case: the upper-left cell is reachable if it's empty
    dp[0][0] = (grid[0][0] == '.') ? 1 : 0;

    // Fill the first row and first column
    for (int i = 1; i < n; ++i) {
        dp[0][i] = (grid[0][i] == '.' && dp[0][i - 1]) ? 1 : 0;
        dp[i][0] = (grid[i][0] == '.' && dp[i - 1][0]) ? 1 : 0;
    }

    // Fill the rest of the table
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == '.') {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            } else {
                dp[i][j] = 0; // Trap encountered, set paths to 0
            }
        }
    }

    // Output the result
    cout << dp[n - 1][n - 1] << endl;

    return 0;
}

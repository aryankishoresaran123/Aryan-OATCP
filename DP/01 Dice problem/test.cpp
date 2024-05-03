/*
    GO TO THE END OF THE FILE FOR MAIN CODE
*/

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countWays(int n) {
    vector<int> dp(n + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    if(n <=0)cout<<0<<endl;
    else{
        int ways = countWays(n);
        cout << ways << endl;
    }
    

    return 0;
}

#include <vector>
#include <iostream>
using namespace std;

int solve(int n) {
    int full_mask = 1 << n;
    vector<int> dp(full_mask, -1);
    dp[0] = 0;
    for (int mask = 0; mask < full_mask; ++mask) {
        for (int i = 0; i < n; ++i) {
            if (!(mask & (1 << i))) {
                int new_mask = mask | (1 << i);
                // dp[new_mask] = max(dp[new_mask], dp[mask] + cost(i));
            }
        }
    }
    return dp[full_mask - 1];
}

int main() {
    int n = 0;
    cout << solve(n) << endl;
    return 0;
}

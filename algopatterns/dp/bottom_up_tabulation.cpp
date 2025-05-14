#include <vector>
#include <iostream>
using namespace std;

int solve(int n) {
    vector<int> dp(n + 1);
    // -- INSERT BASE CASES HERE --
    for (int i = 1; i <= n; ++i) {
        // -- INSERT STATE TRANSITION HERE --
    }
    return dp[n];
}

int main() {
    int n = 0;
    cout << solve(n) << endl;
    return 0;
}

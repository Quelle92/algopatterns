// Pattern: Top-down DP with memoization
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

using State = string;
using Result = int;

unordered_map<State, Result> memo;

Result solve(State s) {
    // -- INSERT BASE CASE HERE --
    if (memo.count(s))
        return memo[s];
    // -- INSERT RECURSIVE CASE HERE --
    return memo[s] = {}; // placeholder
}

int main() {
    State initial_state;
    cout << solve(initial_state) << endl;
    return 0;
}

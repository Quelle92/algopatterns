#include <vector>
#include <iostream>
using namespace std;

bool backtrack(int depth, vector<bool>& used) {
    for (int i = 0; i < used.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            if (backtrack(depth + 1, used))
                return true;
            used[i] = false;
        }
    }
    return false;
}

int main() {
    int n = 0;
    vector<bool> used(n, false);
    backtrack(0, used);
    return 0;
}

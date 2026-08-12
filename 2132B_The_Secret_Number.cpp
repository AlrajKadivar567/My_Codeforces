#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long num;
    cin >> num;
 
    vector<long long> results;
    long long base = 10;
 
    for (int step = 0; step < 19; step++) {
        long long divisor = base + 1;
        if (num % divisor == 0) {
            results.push_back(num / divisor);
        }
        if (step < 18) base *= 10;
    }
 
    if (results.empty()) {
        cout << 0 << "\n";
    } else {
        sort(results.begin(), results.end());
        cout << results.size() << "\n";
        for (size_t i = 0; i < results.size(); i++) {
            cout << results[i] << " ";
        }
        cout << "\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}